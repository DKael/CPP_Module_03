# CPP Module 03

## 1️⃣ 프로젝트 소개

CPP Module 03은 상속(Inheritance)과 다형성(Polymorphism) 의 기초를 학습하는 모듈로, 기본 클래스(Base class)와 파생 클래스(Derived class) 간의 관계를 설계하고, 가상 함수와 소멸자(Virtual destructor)의 필요성을 체험적으로 이해하는 것을 목표로 합니다.

---

## 2️⃣ 과제 목표
	•	상속 관계 설계 및 코드 재사용성 강화
	•	가상 함수(Virtual function)를 통한 동적 바인딩 이해
	•	객체 slicing, 메모리 누수 등 상속 관련 함정 학습
	•	다형성을 활용한 일관된 인터페이스 제공

---

## 3️⃣ Exercise별 구현 사항
### ex00 — Aaaaand... OPEN!
* 기본 캐릭터 클래스 구현 (이름, HP, 에너지, 공격력)
* 공격, 수리, 데미지 처리 메서드 작성

### ex01 — Serena, my love!
* ClapTrap을 상속받아 Guard Gate 모드 추가
* 생성자/소멸자 오버라이딩

### ex02 — Repetitive work
* FragTrap 클래스 구현, High Fives 요청 기능 추가

### ex03 — Now it’s weird!
* ScavTrap, FragTrap을 동시 상속 → 다중 상속 구조 설계
* 이름 충돌 해결 및 ClapTrap의 속성 재활용
* DiamondTrap 고유의 introduce 기능 구현

---

## 4️⃣ 배운 점

### 4.1 상속 설계 원칙
	•	코드 재사용 극대화, 공통 속성의 상위 클래스 추출
	•	“is-a” 관계와 “has-a” 관계 구분

### 4.2 가상 함수와 다형성
	•	동적 바인딩을 통한 런타임 다형성 구현
	•	가상 소멸자(Virtual destructor) 필요성 체득
	•	vtable 구조 이해

### 4.3 다중 상속의 복잡성
	•	Diamond 문제와 가상 상속(Virtual inheritance) 개념 확인
	•	이름 충돌/모호성 해결 방법 학습
	•	베이스 클래스 초기화 순서 제어

### 4.4 객체 수명과 메모리 안정성
	•	소멸자 오버라이딩의 중요성
	•	객체 slicing 문제 확인
	•	메모리 누수/중복 해제 방지 패턴

### 4.5 인터페이스 일관성과 확장성
	•	파생 클래스에서의 공통 메서드 시그니처 유지
	•	확장 기능 추가 시 기반 클래스 인터페이스와 조화 필요

### 4.6 OOP 설계 감각
	•	상속 vs 조합(Composition) 선택 기준
	•	SOLID 원칙 중 LSP(리스코프 치환 원칙)의 실습적 이해
	•	유지보수성과 확장성을 고려한 클래스 계층 구조 설계

---

## 5️⃣ Exercise별 실행 방법

### 공통

bash
```
make                      # 전체 빌드
make clean / fclean / re  # 재빌드 / 정리
```

### ex00

bash
```
./claptrap
```

### ex01

bash
```
./scavtrap
```

### ex02

bash
```
./fragtrap
```

### ex03

bash
```
./diamondtrap
```

---

## 6️⃣ 기술 스택
	•	언어: C++98
	•	운영체제/환경: Unix/Linux
	•	빌드 도구: GNU Make
	•	디버그 도구: VSCode, valgrind
