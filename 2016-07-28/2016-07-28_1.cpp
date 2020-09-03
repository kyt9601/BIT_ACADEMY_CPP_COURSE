// STL 컨테이너 : 데이터 저장 보관소 => 자료구조

// 시퀀스 컨테이너 (선형 자료구조)
//	- vector (동적 배열)
//	- list (이중 연결 리스트)
//	- deque (특수 배열)
// 시퀀스 컨테이너의 일종인,
// 컨테이너 어댑터
//	- queue
//	- stack

//				삽입(앞)	삽입(중간)		삽입(뒤)	엑세스

//	vector		느림		느림			빠름		랜덤 엑세스[]

//	list		빠름		빠름			빠름		순차 엑세스[]

//	deque		빠름		느림			빠름		랜덤 엑세스[]

// 왠만해서 안바뀌는 건 vector
// 크기를 가늠할 수 없는 건 list

// 연관 컨테이너 (비선형 자료구조)
//	- set, multiset (트리) : 계층적인 구조를 표현하기 위해 사용
//	- map, multimap
// multi 는 중복값 허용

// STL 의 철학

// 1) OOP 개념은 없다
// 2) 동일한 인터페이스 (vector.insert , list.insert)
// - 프로그래머 입장에서 사용법이 동일하다