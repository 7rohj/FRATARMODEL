# FRATARMODEL
pyqt로 프로그램을 만들어보아요

### FRATARMODEL v.1.2 (중간점검)
#### 수정한 부분 및 공부한 부분 😎
- `1. pandas 보다 numpy가 훨씬 빠르다. ` </br>
pandas로는 500x500이 7분 소요 되었고(함수 2개, 15번 반복) numpy로는 10초 남짓 소요됨 </br>
numpy에 빈칸 있으면 sum과 같은 함수 적용안됨 </br>
numpy concat 할때는 size 같게 만들어줘야함.. </br>
- `2. gui는 pyqt5 그리고 qtdesigner를 이용하기.`</br>
코드로 front end를 일일이 짜는거 너무 힘듦.. </br>
- `3. pyinstaller` </br>
할때 .qrc 파일 .py 파일로 변환 </br>
pyinstaller -w -F main.py 하고 만들어진 .spec 부분 내용 수정 </br>
경로는 절대경로로 변경 </br>
![image](https://github.com/7rohj/FRATARMODEL/assets/99319638/29b93782-0864-40a9-b9cb-9f14096f2ce6)




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

누군가에겐 내 코드가 도움이 되길 바라며 커밋
