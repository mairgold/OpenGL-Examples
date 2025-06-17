# OpenGL Examples in C

이 프로젝트는 OpenGL과 FreeGLUT를 사용하여 작성한 C언어 그래픽 예제입니다.

---

## 1. Rainbow Rectangle 🌈

OpenGL 기본을 이용해 4개의 색이 섞인 사각형을 화면에 출력합니다.

- 사용: `glBegin(GL_QUADS)` / `glColor3f()`
- 결과: 무지개 색상의 정사각형

---

## 2. Rotating Wireframe Teapot 🍵

FreeGLUT을 활용하여 3D 주전자를 회전시킵니다.

- 사용: `glutWireTeapot()`, `glRotatef()`
- 애니메이션: `glutTimerFunc()`으로 회전 구현

---

## 빌드 방법 (Visual Studio)
1. 새 콘솔 C 프로젝트 생성
2. NuGet으로 `freeglut` 설치
3. `.c` 파일 붙여넣고 실행

---

## 작성 소감 ✍️

처음으로 OpenGL을 다뤄보며 색상 처리, 애니메이션 구현, 3D 모델 활용법을 익힐 수 있었습니다.  
C언어와 그래픽의 연동은 흥미로웠으며, FreeGLUT의 유용성도 체감했습니다.
