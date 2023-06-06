# FRATARMODEL
pyqt로 프로그램을 만들어보아요

### FRATARMODEL v.1.2 (중간점검)
#### 수정한 부분
![image](https://github.com/7rohj/FRATARMODEL/assets/99319638/4fe6f463-8dac-4548-9085-b204b8528286)



### FRATARMODEL v.1.0 (중간점검)
[로직코드 보러가기](https://github.com/7rohj/FRATARMODEL/blob/main/%ED%94%84%EB%9D%BC%ED%83%80%EB%82%B4%EB%B6%80%EC%BD%94%EB%93%9C%20230526.ipynb/) </br>
`프라타모형이란? origin/ destination 에서 전체 유입유출량 부분을 수정했을때, 내부 발생량을 찾아서 계산하는 로직`

#### 수정할 부분 검토 🤔
- gui 가 너무 허접함 -> pyside 사용해보기
- cycle 횟수 사용자가 설정할 수 있게끔 수정
- txt 파일로 저장 (matrix/fromto 선택)
- pyinstaller 로 .exe 파일로 생성했을때 프롬프트가 켜졌다가 그냥 꺼짐
- 500 * 500으로 돌리면 430초가 걸림..
- 생성된 exe 파일 용량이 너무큼 (환경변수를 아나콘다에서 순정 파이썬으로 수정)


![image](https://github.com/7rohj/FRATARMODEL/assets/99319638/4affe1fe-50c6-413e-b59e-f808992c851f)

파이썬 최고
