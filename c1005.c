#include <stdio.h>
#pragma warning(disable:4996)

// 1. 함수이름 결정 : hap
// 2. 매개변수 선언 : (a,b)
// 3. 리턴값의 형태 : int
// 4. 함수 몸통 : { }

//int hap(int x, int y) {
//	int z=x + y;
//	return z;
//};
//
//void hap1(int x, int y) {
//	printf("x+y=%d",x + y);
//};

//int sum(int kor, int eng, int mat) {
//	//int tot=kor + eng + mat;
//	//return tot;
//	return kor + eng + mat;
//};
//
//double avg(int tot) {
//	double avg1 = tot / 3.0;
//	return avg1;
//};

//void menu_disp();
//double add(),sub(),mul(),div();
//void res_disp(double result);



int main()
{
	// 포인터(&) => 변수 기억공간의 주소
	// 참조연산자(*)
	//int a = 10;
	//int ap = &a;	// 포인터변수:포인터를 저장하는 변수
	//int *ap1 = &a;  // 포인터변수:포인터를 저장하는 변수
	//printf("%d\n", a);
	//printf("%d\n", &a);
	//printf("%u\n", &a);
	//printf("%u\n", *&a);
	//printf("%u\n", ap);
	//printf("%u\n", ap1);

	//int a = 100;
	//int* ap;
	//ap = &a;
	//printf("%d\n", a);
	//printf("%d\n", ap);
	//printf("%d\n", &a);
	//printf("%d\n", *&a);

	//두 개의 double형 변수 a, b에 다음과 같이 값이 저장
	//double a = 1.3;
	//double b = 1.7;
	//두 변수 a, b를 가리키는 포인터변수를 사용하여 두 변수의 값을 바꾸는 프로그램을 작성
	//[실행 결과]
	//바꾸기 전의 a, b의 값 : 1.3, 1.7
	//바꾼 후의 a, b의 값 : 1.7, 1.3

	//double a = 1.3;
	//double b = 1.7;
	//double* ap, * bp;
	//double temp;
	//printf("바꾸기 전의 a,b의 값 : %.1lf,%.1lf \n", a, b);
	//ap = &a;
	//bp = &b;
	//temp = *ap;
	//*ap = *bp;
	//*bp = temp;
	//printf("바꾼 후의 a,b의 값 : %.1lf,%.1lf \n", a, b);

	// 함수 : 기능을 수행하는 코드 단위
	// 1. 함수이름 결정 : main
	// 2. 매개변수 선언 : ( )
	// 3. 리턴값의 형태 : int
	// 4. 함수 몸통 : { }
	// int main()
	// {
	//		return 0;
	// }
	//

	// 1,2 더하는 함수를 이용한 계산
	//int a = 1, b = 2;
	//int sum = a + b;
	//printf("sum=%d\n", sum);
	//printf("a+b=%d\n", a + b);
	//int res=hap(a, b);
	//printf("hap(a,b)=%d\n", hap(a, b));
	//printf("res=%d\n", res);
	//hap1(a, b);



	// 세과목의 점수를 입력받아 합계와 평균출력
	// 합계, 평균 함수 생성

	//int k, e, m;
	//printf("세과목의 점수를 입력하세요 : ");
	//scanf("%d%d%d", &k, &e, &m);
	//int tot=sum(k, e, m);
	//printf("세과목의 합계는 %d입니다. \n", tot);
	//printf("평균은 %.1lf입니다. \n", avg(tot));

	//  메뉴를 출력하는 프로그램을 함수를 만들어 작성
	//	단지 메뉴만을 화면에 보여주는 프로그램
	//	함수의 이름은 menu_disp
	//	메뉴에 따라 사칙연산을 수행하는 프로그램을 작성
	//	메뉴에서 번호를 선택하면 그 번호에 따라 switch~case문에서
	//	사칙연산을 수행하는 각 함수들을 호출
	//	1.덧셈(addition)
	//	2.뺄셈(subtraction)
	//	3.곱셈(multiplication)
	//	4.나눗셈(division)
	//	>> 원하는 메뉴를 선택하세요 :
	//  두 개의 숫자를 입력하세요 : 10 2.2
	//	결과값은 4.545455입니다.
	//int sel;
	//double result;
	//
	//menu_disp();
	//scanf("%d", &sel);
	//switch (sel) {
	//case 1:
	//	result=add();
	//	res_disp(result);
	//	break;
	//case 2:
	//	result = sub();
	//	res_disp(result);
	//	break;
	//case 3:
	//	result = mul();
	//	res_disp(result);
	//	break;
	//case 4:
	//	result = div();
	//	res_disp(result);	
	//	break;
	//}

	// 구조체 : 다른 자료형도 묶음 가능
	// 배열 : 같은 자료형만 묶음

	// 5명의 학번,학점
	int num[5];
	double grade[5];

	// 구조체 만들기
	// 예약어 구조체이름{
	//		멤버
	// }
	// struct : 구조체 예약어
	// student : 구조체 이름
	struct student {
		int	num;			// 멤버
		double grade;		// 멤버
	};
	// s1 : 구조체형 변수
	struct student s1;
	s1.num = 1;				// 구조체 멤버 참조
	s1.grade = 1.1;			// 구조체 멤버 참조
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	struct student* sp = &s1;
	//printf("%d\n", *sp.num);
	printf("%d\n", (*sp).num);
	printf("(*sp).num => sp->num : %d\n", sp->num); // (->):간접멤버참조연산자





	return 0;
}

//void menu_disp() {
//	printf("======== 메뉴 ======== \n");
//	printf("1.덧셈(addition) \n");
//	printf("2.뺄셈(subtraction) \n");
//	printf("3.곱셈(multiplication) \n");
//	printf("4.나눗셈(division) \n");
//	printf(">> 원하는 메뉴를 선택하세요 : \n");
//}
//
//double add() {
//	double a, b, res;
//	printf("두개의 숫자를 입력하세요 : ");
//	scanf("%lf%lf", &a, &b);
//	res = a + b;
//	return res;
//}
//double sub() {
//	double a, b, res;
//	printf("두개의 숫자를 입력하세요 : ");
//	scanf("%lf%lf", &a, &b);
//	return a - b;
//}
//double mul() {
//	double a, b, res;
//	printf("두개의 숫자를 입력하세요 : ");
//	scanf("%lf%lf", &a, &b);
//	res = a * b;
//	return res;
//}
//double div() {
//	double a, b, res;
//	printf("두개의 숫자를 입력하세요 : ");
//	scanf("%lf%lf", &a, &b);
//	res = a / b;
//	return res;
//}
//
//void res_disp(double result) {
//	printf("결과값은 %lf입니다.\n", result);
//}