#include <stdio.h>
#pragma warning(disable:4996)

// 1. �Լ��̸� ���� : hap
// 2. �Ű����� ���� : (a,b)
// 3. ���ϰ��� ���� : int
// 4. �Լ� ���� : { }

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
	// ������(&) => ���� �������� �ּ�
	// ����������(*)
	//int a = 10;
	//int ap = &a;	// �����ͺ���:�����͸� �����ϴ� ����
	//int *ap1 = &a;  // �����ͺ���:�����͸� �����ϴ� ����
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

	//�� ���� double�� ���� a, b�� ������ ���� ���� ����
	//double a = 1.3;
	//double b = 1.7;
	//�� ���� a, b�� ����Ű�� �����ͺ����� ����Ͽ� �� ������ ���� �ٲٴ� ���α׷��� �ۼ�
	//[���� ���]
	//�ٲٱ� ���� a, b�� �� : 1.3, 1.7
	//�ٲ� ���� a, b�� �� : 1.7, 1.3

	//double a = 1.3;
	//double b = 1.7;
	//double* ap, * bp;
	//double temp;
	//printf("�ٲٱ� ���� a,b�� �� : %.1lf,%.1lf \n", a, b);
	//ap = &a;
	//bp = &b;
	//temp = *ap;
	//*ap = *bp;
	//*bp = temp;
	//printf("�ٲ� ���� a,b�� �� : %.1lf,%.1lf \n", a, b);

	// �Լ� : ����� �����ϴ� �ڵ� ����
	// 1. �Լ��̸� ���� : main
	// 2. �Ű����� ���� : ( )
	// 3. ���ϰ��� ���� : int
	// 4. �Լ� ���� : { }
	// int main()
	// {
	//		return 0;
	// }
	//

	// 1,2 ���ϴ� �Լ��� �̿��� ���
	//int a = 1, b = 2;
	//int sum = a + b;
	//printf("sum=%d\n", sum);
	//printf("a+b=%d\n", a + b);
	//int res=hap(a, b);
	//printf("hap(a,b)=%d\n", hap(a, b));
	//printf("res=%d\n", res);
	//hap1(a, b);



	// �������� ������ �Է¹޾� �հ�� ������
	// �հ�, ��� �Լ� ����

	//int k, e, m;
	//printf("�������� ������ �Է��ϼ��� : ");
	//scanf("%d%d%d", &k, &e, &m);
	//int tot=sum(k, e, m);
	//printf("�������� �հ�� %d�Դϴ�. \n", tot);
	//printf("����� %.1lf�Դϴ�. \n", avg(tot));

	//  �޴��� ����ϴ� ���α׷��� �Լ��� ����� �ۼ�
	//	���� �޴����� ȭ�鿡 �����ִ� ���α׷�
	//	�Լ��� �̸��� menu_disp
	//	�޴��� ���� ��Ģ������ �����ϴ� ���α׷��� �ۼ�
	//	�޴����� ��ȣ�� �����ϸ� �� ��ȣ�� ���� switch~case������
	//	��Ģ������ �����ϴ� �� �Լ����� ȣ��
	//	1.����(addition)
	//	2.����(subtraction)
	//	3.����(multiplication)
	//	4.������(division)
	//	>> ���ϴ� �޴��� �����ϼ��� :
	//  �� ���� ���ڸ� �Է��ϼ��� : 10 2.2
	//	������� 4.545455�Դϴ�.
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

	// ����ü : �ٸ� �ڷ����� ���� ����
	// �迭 : ���� �ڷ����� ����

	// 5���� �й�,����
	int num[5];
	double grade[5];

	// ����ü �����
	// ����� ����ü�̸�{
	//		���
	// }
	// struct : ����ü �����
	// student : ����ü �̸�
	struct student {
		int	num;			// ���
		double grade;		// ���
	};
	// s1 : ����ü�� ����
	struct student s1;
	s1.num = 1;				// ����ü ��� ����
	s1.grade = 1.1;			// ����ü ��� ����
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);

	struct student* sp = &s1;
	//printf("%d\n", *sp.num);
	printf("%d\n", (*sp).num);
	printf("(*sp).num => sp->num : %d\n", sp->num); // (->):�����������������





	return 0;
}

//void menu_disp() {
//	printf("======== �޴� ======== \n");
//	printf("1.����(addition) \n");
//	printf("2.����(subtraction) \n");
//	printf("3.����(multiplication) \n");
//	printf("4.������(division) \n");
//	printf(">> ���ϴ� �޴��� �����ϼ��� : \n");
//}
//
//double add() {
//	double a, b, res;
//	printf("�ΰ��� ���ڸ� �Է��ϼ��� : ");
//	scanf("%lf%lf", &a, &b);
//	res = a + b;
//	return res;
//}
//double sub() {
//	double a, b, res;
//	printf("�ΰ��� ���ڸ� �Է��ϼ��� : ");
//	scanf("%lf%lf", &a, &b);
//	return a - b;
//}
//double mul() {
//	double a, b, res;
//	printf("�ΰ��� ���ڸ� �Է��ϼ��� : ");
//	scanf("%lf%lf", &a, &b);
//	res = a * b;
//	return res;
//}
//double div() {
//	double a, b, res;
//	printf("�ΰ��� ���ڸ� �Է��ϼ��� : ");
//	scanf("%lf%lf", &a, &b);
//	res = a / b;
//	return res;
//}
//
//void res_disp(double result) {
//	printf("������� %lf�Դϴ�.\n", result);
//}