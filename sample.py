import sys
import os
import time
import pandas as pd
import numpy as np
from PyQt5.QtWidgets import *
from PyQt5 import uic
import QSS_Resources_rc
import resource_rc

#form_class = uic.loadUiType("interface.ui")[0]
script_dir = os.path.dirname(os.path.abspath(__file__))
ui_file_path = os.path.join(script_dir, "interface.ui")
form_class = uic.loadUiType(ui_file_path)[0]

class WindowClass(QMainWindow, form_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

        self.df_values = None
        self.wntO = None
        self.wntD = None

        self.attatchfile1.clicked.connect(self.btn_FileLoad)
        self.attatchfile2.clicked.connect(self.btn_FileLoad2)
        self.attatchfile3.clicked.connect(self.btn_FileLoad3)
        self.startBtn.clicked.connect(self.execute_level1_level2)
        self.saveBtn.clicked.connect(self.save)

    def level1(self,df_values,wntO,wntD):
        ###########################################
        wntO_copy = list(wntO)
        wntD_copy = list(wntO)

        wntO_copy.append(0)
        wntD_copy.append(0)
        wntD_copy.append(0)
        
        data = df_values
        df_values = np.zeros((len(df_values), len(df_values)))

        for i, row in enumerate(data):
            df_values[i,:len(row)] = row

        df_copy = df_values.copy()
        ###########################################    
        df_values = np.column_stack((df_values, wntO_copy))
        df_values = np.vstack([df_values,wntD_copy])
        df_values
        #pd.DataFrame(df_values)

        length = len(wntO)
        sumO = df_values[:length,length].tolist()
        sumD = df_values[length,:length].tolist()

        Ei = [a / b for a, b in zip(wntO, sumO)]
        Fj = [a / b for a, b in zip(wntD, sumD)]

        Ei.append(0)
        Ei.append(0)
        Fj.append(0)
        Fj.append(0)
        Fj.append(0)

        df_values = np.column_stack([df_values, Ei])
        df_values = np.vstack([df_values,Fj])
        #pd.DataFrame(df_values)

        Li = []
        Lj = []

        for i in range(length):
            Li.append(df_values[i,-3]/np.sum(df_values[i] * df_values[-1]))
        #print(Li)

        for j in range(length):
            Lj.append(df_values[-3,j]/np.sum(df_values[:,j] * df_values[:,-1]))
        #print(Lj)

        Li.append(0)
        Li.append(0)
        Li.append(0)
        Lj.append(0)
        Lj.append(0)
        Lj.append(0)
        Lj.append(0)

        df_values = np.column_stack([df_values, Li])
        df_values = np.vstack([df_values,Lj])
        #pd.DataFrame(df_values)

        return df_values, df_copy

    def level2(self,df_values, df_copy):
        result = np.zeros_like(df_copy)

        for i in range(len(df_copy)-1):
            for j in range(len(df_copy)-1):
                #print(i, ' ', j, ' ',df_values[i, j] * df_values[i, -2] * df_values[-2, j] * (df_values[i, -1] + df_values[-1, j]) / 2)
                result[i, j] = df_values[i, j] * df_values[i, -2] * df_values[-2, j] * (df_values[i, -1] + df_values[-1, j]) / 2

        result = result[:-1,:-1]
        result
        #pd.DataFrame(result)

        row_values = result.sum(axis=1).tolist()
        column_values = result.sum(axis=0).tolist()

        # 패딩 # 배열의 크기가 일치 하지 않으면 안됨
        column_values.append(0)

        result = np.column_stack([result,row_values])
        result = np.vstack([result,column_values])
        #print(len(df_values)-4)
        return result
    

    def btn_FileLoad(self):
        file_path, _ = QFileDialog.getOpenFileName(self, "File Load", 'C:\\Users\\User', 'All File(*);; Text File(*.txt)')

        if file_path:
            # 파일 경로와 파일 이름을 QLabel에 표시
            try:
                with open(file_path, 'r') as f:
                    lines = f.readlines()

                # 데이터 파싱 및 NumPy 배열로 변환
                df_values = np.array([list(map(float, line.strip().split())) for line in lines])
                self.df_values = df_values
                print("파일을 성공적으로 불러왔습니다.")
                print(df_values)
                
                # DataFrame을 문자열로 변환하여 QPlainTextEdit에 표시
                df = pd.DataFrame(df_values)
                str_data = df.to_string(index=True)

                # 파일 경로와 파일 이름을 QLabel에 표시
                self.label1.setText(file_path)
                self.plainTextEdit.setPlainText(str_data)

            except Exception as e:
                print("파일을 읽어오는 중 오류가 발생했습니다.")
                print(e)

        else:
            print("파일 안 골랐음")

    def btn_FileLoad2(self):
        file_path, _ = QFileDialog.getOpenFileName(self, "File Load", 'C:\\Users\\User', 'All File(*);; Text File(*.txt)')

        if file_path:
            # 파일 경로와 파일 이름을 QLabel에 표시
            try:
                wntO = []
                with open(file_path, 'r') as f:
                    lines = f.readlines()
                    for line in lines:
                        number = float(line.strip())
                        wntO.append(number)

                self.wntO = wntO  # 수정된 부분: self.wntO에 값 할당
                print("파일을 성공적으로 불러왔습니다.")
                print(wntO)

            except Exception as e:
                print("파일을 읽어오는 중 오류가 발생했습니다.")
                print(e)
            
            # 파일 경로와 파일 이름을 QLabel에 표시
            self.label2.setText(file_path)

        else:
            print("파일 안 골랐음")

    def btn_FileLoad3(self):
        file_path, _ = QFileDialog.getOpenFileName(self, "File Load", 'C:\\Users\\User', 'All File(*);; Text File(*.txt)')

        if file_path:
            try:
                wntD = []
                with open(file_path, 'r') as f:
                    lines = f.readlines()
                    for line in lines:
                        number = float(line.strip()) # 실수
                        wntD.append(number)

                self.wntD = wntD
                print("파일을 성공적으로 불러왔습니다.")
                print(wntD)

            except Exception as e:
                print("파일을 읽어오는 중 오류가 발생했습니다.")
                print(e)

            # 파일 경로와 파일 이름을 QLabel에 표시
            self.label3.setText(file_path)

        else:
            print("파일 안 골랐음")

    
    def execute_level1_level2(self):
        detail_cycle = []
        cycles = []
        cycle = self.df_values.copy()

        start_time = time.time()
        for _ in range(15):
            cycle, df_copy = self.level1(cycle, self.wntO, self.wntD)
            detail_cycle.append(cycle)
            cycle = self.level2(cycle, df_copy)
            cycles.append(cycle)

        # cycles의 15번째 인덱스에 있는 값을 pd.DataFrame으로 변환
        df_result = pd.DataFrame(cycles[14])

        # pd.DataFrame을 문자열로 변환하여 QPlainTextEdit에 표시
        df_str = df_result.to_string(index=True)
        self.plainTextEdit_2.setPlainText(df_str)

        end_time = time.time()
        execution_time = end_time - start_time
        self.plainTextEdit_3.setPlainText('실행시간: {}초'.format(execution_time))
        print('실행시간:',execution_time)
        return df_result
        
    def save(self):
        df_result = self.execute_level1_level2()
        file_path, _ = QFileDialog.getSaveFileName(self, "Save File", 'C:\\Users\\User', 'CSV File(*.csv)')

        if file_path:
            try:
                # df_result를 CSV 파일로 저장
                df_result.to_csv(file_path, index=True)
                print("파일을 성공적으로 저장했습니다.")

            except Exception as e:
                print("파일 저장 중 오류가 발생했습니다.")
                print(e)

        else:
            print("파일 저장을 취소했습니다.")   


if __name__ == "__main__" :
    #QApplication : 프로그램을 실행시켜주는 클래스
    app = QApplication(sys.argv) 
    #app.setQuitOnLastWindowClosed(False)
    #WindowClass의 인스턴스 생성
    myWindow = WindowClass() 
    #프로그램 화면을 보여주는 코드
    myWindow.show()
    #프로그램을 이벤트루프로 진입시키는(프로그램을 작동시키는) 코드
    app.exec_()