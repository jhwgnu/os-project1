## Project1 - Writing ptree systemcall and test

### Objective
- DFS(Depth-First-Search) 순서로 process를 저장하는 `ptree` system call 작성
- `ptree` system call을 사용하여 process tree를 출력하는 test코드 작성

### requirements
- the number of `ptree` System call : 380
- Error handlers 
  - [ ] `-EINVAL` : `buf` | `nr` 이 null 값, 혹은 entry가 1보다 작을 때
  - [ ] `-EFAULT` : `buf` | `nr` 이 잘못된 주소 참조 했을 때
- tasklist_lock / tasklist_unlock
- print `pretty shaped process tree`
- Files to implement
  - [ ]  **test.c**  : `ptree` systemcall 실행 및 출력
  - [ ] **SYS_ptree** : `ptree` systemcall
  - [ ] **printfo.h :** `struct printfo`

### Logic Idea
1. 재귀를 이용한 방법
2. Loop문을 이용한 방법

### Member's Task
- 재귀 방법을 이용한 구현 : 방준호 & 원종훈
- Loop 문을 이용한 구현 : 강상재

### Schecule