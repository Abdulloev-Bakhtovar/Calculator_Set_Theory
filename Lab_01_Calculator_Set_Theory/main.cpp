#include <string>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

/*�������*/
//Universum
void addElementToStringUniversum(string& str);
void stringToIntUniversum(string str, int*& arr, int& sizePlenty);
void randomNumUniversum(int*& arr, int& sizePlenty);

//Plenty
void addElementToString(string& str, int* Universum, int sizeUniversum);
void stringToInt(string str, int*& arr, int& sizePlenty, int* Universum, int sizeUniversum);
void randomNum(int*& arr, int& sizePlenty, int* Universum, int sizeUniversum);
void print(int* arr, int size);

//�������� ��� ���������
void operationUnification(int* arrF, int sizeF, int* arrS, int sizeS);//����������� +
void operationIntersection(int* arrF, int sizeF, int* arrS, int sizeS);//����������� *
void operationDifference(int* arrF, int sizeF, int* arrS, int sizeS);/*������� \ */
void operationSymmetricDifference(int* arrF, int sizeF, int* arrS, int sizeS);//�������������� ������� %

void operationCheckOccurrence(int* arrF, int sizeF, int* arrS, int sizeS);//��������� ��������� ������� � �������
void operationAddition(int* arrF, int sizeF, int* universum, int sizeUniversum);//�������� �� ���������� !�
void operationAdditionNum(int* arr, int size, int num);//��������� ��������� ������� � �������


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int* Universum = nullptr;
	int sizeUniversum = 0;

	int* PlentyA = nullptr;
	int sizePlentyA = 0;

	int* PlentyB = nullptr;
	int sizePlentyB = 0;

	int* PlentyC = nullptr;
	int sizePlentyC = 0;

	int* PlentyD = nullptr;
	int sizePlentyD = 0;

	int* PlentyE = nullptr;
	int sizePlentyE = 0;

	bool BoolSelectAction = true;
	while (BoolSelectAction)
	{
		/********************************************/

		cout << "Universum = { ";
		print(Universum, sizeUniversum);
		cout << "}" << endl;

		cout << "Plenty A = { ";
		print(PlentyA, sizePlentyA);
		cout << "}" << endl;

		cout << "Plenty B = { ";
		print(PlentyB, sizePlentyB);
		cout << "}" << endl;

		cout << "Plenty C = { ";
		print(PlentyC, sizePlentyC);
		cout << "}" << endl;

		cout << "Plenty D = { ";
		print(PlentyD, sizePlentyD);
		cout << "}" << endl;

		cout << "Plenty E = { ";
		print(PlentyE, sizePlentyE);
		cout << "}" << endl;
		/********************************************/
		cout << "�������� �������� �� ������:" << endl;
		cout << "   1) �������� ��������" << endl;
		cout << "   2) �������� ���������" << endl;
		cout << "   3) �������� ��� ����������" << endl;
		cout << "   4) ��������� ��������� ����� ��������" << endl;
		cout << "   5) ��������� ��������� ������� � ��������" << endl;
		cout << "   6) ��������� �� ����������" << endl;
		cout << "   7) �����" << endl;
		int SelectAction;
		cout << "�������� �������� [1-7]: ";
		cin >> SelectAction;
		switch (SelectAction)
		{
		case 1:// �������� ��������
		{
			bool BoolSelectActionUniPle = true;
			while (BoolSelectActionUniPle)
			{
				int SelectActionUniPle;
				cout << "�������� ��������:" << endl;
				cout << "   1) ���������" << endl;
				cout << "   2) ���������" << endl;
				cout << "   3) �����" << endl;
				cout << "������� ��������[1 - 3]: ";
				cin >> SelectActionUniPle;
				switch (SelectActionUniPle)
				{
				case 1://���������
				{
					bool BoolSelectActionInpRand = true;
					while (BoolSelectActionInpRand)
					{
						cout << "�������� ��������:" << endl;
						cout << "   1) ������ ����" << endl;
						cout << "   2) ��������� ���� (���)" << endl;
						cout << "   3) �����" << endl;
						cout << "   4) � ������ ���������" << endl;
						int SelectActionInpRand;
						cout << "������� ��������[1 - 4]: ";
						cin >> SelectActionInpRand;
						switch (SelectActionInpRand)
						{
						case 1:
						{
							cout << "������� �������� ��� ����������: ";
							string ManualInput;
							addElementToStringUniversum(ManualInput);
							stringToIntUniversum(ManualInput, Universum, sizeUniversum);
							break;
						}
						case 2:
						{
							randomNumUniversum(Universum, sizeUniversum);
							break;
						}
						case 3:
						{
							system("cls");
							BoolSelectActionInpRand = false;
							break;
						}
						case 4:
						{
							system("cls");
							BoolSelectActionInpRand = false;
							BoolSelectActionUniPle = false;
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - ������ �������� �����" << endl;
							cout << "**********************************" << endl;
							break;
						}
					}
					break;
				}
				case 2://���������
				{
					if (Universum == nullptr)
					{
						system("cls");
						cout << "**********************" << endl;
						cout << ">��������� - �����" << endl;
						cout << "**********************" << endl;
						break;
					}
					bool BoolNamePlenty = true;
					while (BoolNamePlenty)
					{
						cout << "������� ��������(A,B,C,D,E, (X - ��� ������)): ";
						char namePlenty;
						cin >> namePlenty;
						switch (namePlenty)
						{
						case 'A'://��������� A
						{
							cout << "�������� ��������:" << endl;
							cout << "   1) ������ ����" << endl;
							cout << "   2) ��������� ���� (���)" << endl;
							cout << "   3) �����" << endl;
							cout << "   4) � ������ ���������" << endl;
							int SelectActionInpRand;
							cout << "������� ��������[1 - 4]: ";
							cin >> SelectActionInpRand;
							switch (SelectActionInpRand)
							{
							case 1://���� ������� ��� ���������
							{
								string ManualInput;
								addElementToString(ManualInput, Universum, sizeUniversum);
								stringToInt(ManualInput, PlentyA, sizePlentyA, Universum, sizeUniversum);
								break;
							}
							case 2://������ ������� ��� ���������
							{
								randomNum(PlentyA, sizePlentyA, Universum, sizeUniversum);
								break;
							}
							case 3:
							{
								system("cls");
								BoolNamePlenty = false;
								break;
							}
							case 4:
							{
								system("cls");
								BoolNamePlenty = false;
								BoolSelectActionUniPle = false;
								break;
							}
							default:
								system("cls");
								cout << "**********************************" << endl;
								cout << ">��������� - ������ �������� �����" << endl;
								cout << "**********************************" << endl;
								break;
							}
							break;
						}
						case 'B'://��������� B
						{

							cout << "�������� ��������:" << endl;
							cout << "   1) ������ ����" << endl;
							cout << "   2) ��������� ���� (���)" << endl;
							cout << "   3) �����" << endl;
							cout << "   4) � ������ ���������" << endl;
							int SelectActionInpRand;
							cout << "������� ��������[1 - 4]: ";
							cin >> SelectActionInpRand;
							switch (SelectActionInpRand)
							{
							case 1://���� ������� ��� ���������
							{
								string ManualInput;
								addElementToString(ManualInput, Universum, sizeUniversum);
								stringToInt(ManualInput, PlentyB, sizePlentyB, Universum, sizeUniversum);

								break;
							}
							case 2://������ ������� ��� ���������
							{
								randomNum(PlentyB, sizePlentyB, Universum, sizeUniversum);
								break;
							}
							case 3:
							{
								system("cls");
								BoolNamePlenty = false;
								break;
							}
							case 4:
							{
								system("cls");
								BoolNamePlenty = false;
								BoolSelectActionUniPle = false;
								break;
							}
							default:
								system("cls");
								cout << "**********************************" << endl;
								cout << ">��������� - ������ �������� �����" << endl;
								cout << "**********************************" << endl;
								break;
							}
							break;
						}
						case 'C'://��������� C
						{
							cout << "�������� ��������:" << endl;
							cout << "   1) ������ ����" << endl;
							cout << "   2) ��������� ���� (���)" << endl;
							cout << "   3) �����" << endl;
							cout << "   4) � ������ ���������" << endl;
							int SelectActionInpRand;
							cout << "������� ��������[1 - 4]: ";
							cin >> SelectActionInpRand;
							switch (SelectActionInpRand)
							{
							case 1://���� ������� ��� ���������
							{
								string ManualInput;
								addElementToString(ManualInput, Universum, sizeUniversum);
								stringToInt(ManualInput, PlentyC, sizePlentyC, Universum, sizeUniversum);
								break;
							}
							case 2://������ ������� ��� ���������
							{
								randomNum(PlentyC, sizePlentyC, Universum, sizeUniversum);
								break;
							}
							case 3:
							{
								system("cls");
								BoolNamePlenty = false;
								break;
							}
							case 4:
							{
								system("cls");
								BoolNamePlenty = false;
								BoolSelectActionUniPle = false;
								break;
							}
							default:
								system("cls");
								cout << "**********************************" << endl;
								cout << ">��������� - ������ �������� �����" << endl;
								cout << "**********************************" << endl;
								break;
							}
							break;
						}
						case 'D'://��������� D
						{
							cout << "�������� ��������:" << endl;
							cout << "   1) ������ ����" << endl;
							cout << "   2) ��������� ���� (���)" << endl;
							cout << "   3) �����" << endl;
							cout << "   4) � ������ ���������" << endl;
							int SelectActionInpRand;
							cout << "������� ��������[1 - 4]: ";
							cin >> SelectActionInpRand;
							switch (SelectActionInpRand)
							{
							case 1://���� ������� ��� ���������
							{
								string ManualInput;
								addElementToString(ManualInput, Universum, sizeUniversum);
								stringToInt(ManualInput, PlentyD, sizePlentyD, Universum, sizeUniversum);
								break;
							}
							case 2://������ ������� ��� ���������
							{
								randomNum(PlentyD, sizePlentyD, Universum, sizeUniversum);
								break;
							}
							case 3:
							{
								system("cls");
								BoolNamePlenty = false;
								break;
							}
							case 4:
							{
								system("cls");
								BoolNamePlenty = false;
								BoolSelectActionUniPle = false;
								break;
							}
							default:
								system("cls");
								cout << "**********************************" << endl;
								cout << ">��������� - ������ �������� �����" << endl;
								cout << "**********************************" << endl;
								break;
							}
							break;
						}
						case 'E'://��������� E
						{
							cout << "�������� ��������:" << endl;
							cout << "   1) ������ ����" << endl;
							cout << "   2) ��������� ���� (���)" << endl;
							cout << "   3) �����" << endl;
							cout << "   4) � ������ ���������" << endl;
							int SelectActionInpRand;
							cout << "������� ��������[1 - 4]: ";
							cin >> SelectActionInpRand;
							switch (SelectActionInpRand)
							{
							case 1://���� ������� ��� ���������
							{
								string ManualInput;
								addElementToString(ManualInput, Universum, sizeUniversum);
								stringToInt(ManualInput, PlentyE, sizePlentyE, Universum, sizeUniversum);
								break;
							}
							case 2://������ ������� ��� ���������
							{
								randomNum(PlentyE, sizePlentyE, Universum, sizeUniversum);
								break;
							}
							case 3:
							{
								system("cls");
								BoolNamePlenty = false;
								break;
							}
							case 4:
							{
								system("cls");
								BoolNamePlenty = false;
								BoolSelectActionUniPle = false;
								break;
							}
							default:
								system("cls");
								cout << "**********************************" << endl;
								cout << ">��������� - ������ �������� �����" << endl;
								cout << "**********************************" << endl;
								break;
							}
							break;
						}
						case 'X'://����� �� ����� ��������
						{
							system("cls");
							BoolNamePlenty = false;
							break;
						}
						default:
							system("cls");
							cout << "*******************************************" << endl;
							cout << ">��������� - ������ ��������� ���� � ������" << endl;
							cout << "*******************************************" << endl;
							break;
						}
					}
					break;
				}
				case 3:
				{
					system("cls");
					BoolSelectActionUniPle = false;
					break;
				}
				default:
					system("cls");
					cout << "**********************************" << endl;
					cout << ">��������� - ������ �������� �����" << endl;
					cout << "**********************************" << endl;
					break;
				}
			}
			break;
		}
		case 2:// �������� ���������
		{
			bool BoolClearPlenty = true;
			while (BoolClearPlenty)
			{
				int SelectActionFoDelete;
				cout << "�������� ��������:" << endl;
				cout << "   1) ���������" << endl;
				cout << "   2) ���������" << endl;
				cout << "   3) �����" << endl;
				cout << "������� ��������[1 - 3]: ";
				cin >> SelectActionFoDelete;
				switch (SelectActionFoDelete)
				{
				case 1://���������
				{
					if (Universum != nullptr)
						delete[] Universum;
					Universum = nullptr;
					sizeUniversum = 0;
					system("cls");
					cout << "**********************************" << endl;
					cout << ">��������� - ��������� �������" << endl;
					cout << "**********************************" << endl;
					break;
				}
				case 2://��������
				{
					bool BoolNamePlenty = true;
					while (BoolNamePlenty)
					{
						cout << "������� ��������(A,B,C,D,E, (X - ��� ������)): ";
						char namePlenty;
						cin >> namePlenty;
						switch (namePlenty)
						{
						case 'A':
						{
							if (PlentyA != nullptr)
								delete[] PlentyA;
							PlentyA = nullptr;
							sizePlentyA = 0;
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - ��������� " << namePlenty << " �������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						case 'B':
						{
							if (PlentyB != nullptr)
								delete[] PlentyB;
							PlentyB = nullptr;
							sizePlentyB = 0;
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - ��������� " << namePlenty << " �������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						case 'C':
						{
							if (PlentyC != nullptr)
								delete[] PlentyC;
							PlentyC = nullptr;
							sizePlentyC = 0;
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - ��������� " << namePlenty << " �������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						case 'D':
						{
							if (PlentyD != nullptr)
								delete[] PlentyD;
							PlentyD = nullptr;
							sizePlentyD = 0;
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - ��������� " << namePlenty << " �������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						case 'E':
						{
							if (PlentyE != nullptr)
								delete[] PlentyE;
							PlentyE = nullptr;
							sizePlentyE = 0;
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - ��������� " << namePlenty << " �������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						case 'X'://����� �� ����� ��������
						{
							system("cls");
							BoolNamePlenty = false;
							break;
						}
						default:
							system("cls");
							cout << "*******************************************" << endl;
							cout << ">��������� - ������ ��������� ���� � ������" << endl;
							cout << "*******************************************" << endl;
							break;
						}
					}
				}
				case 3:
				{
					system("cls");
					BoolClearPlenty = false;
					break;
				}
				default:
					system("cls");
					cout << "**********************************" << endl;
					cout << ">��������� - ������ �������� �����" << endl;
					cout << "**********************************" << endl;
					break;
				}
			}
			break;
		}
		case 3://�������� ��� ����������
		{
			bool BoolOperationOnSets = true;
			while (BoolOperationOnSets)
			{

				char firstPlenty, secondPlenty, operation;
				cout << "�����������(+)\n�����������(*)\n��������(\\)\n�������������� ��������(%)\n�����(ext)" << endl;
				cout << "��������: A+B" << endl;
				cout << "�������: ";
				cin >> firstPlenty >> operation >> secondPlenty;
				switch (firstPlenty)
				{
				case 'A':
				{
					switch (secondPlenty)
					{
					case 'A':
					{
						switch (operation)
						{
						case '+':
						{
							cout << "Result = [ ";
							print(PlentyA, sizePlentyA);
							cout << "]" << endl;
							break;
						}
						case '*':
						{
							cout << "Result = [ ";
							print(PlentyA, sizePlentyA);
							cout << "]" << endl;
							break;
						}
						case '\\':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						case '%':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'B':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyA, sizePlentyA, PlentyB, sizePlentyB);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyA, sizePlentyA, PlentyB, sizePlentyB);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyA, sizePlentyA, PlentyB, sizePlentyB);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyA, sizePlentyA, PlentyB, sizePlentyB);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'C':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyA, sizePlentyA, PlentyC, sizePlentyC);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyA, sizePlentyA, PlentyC, sizePlentyC);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyA, sizePlentyA, PlentyC, sizePlentyC);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyA, sizePlentyA, PlentyC, sizePlentyC);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'D':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyA, sizePlentyA, PlentyD, sizePlentyD);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyA, sizePlentyA, PlentyD, sizePlentyD);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyA, sizePlentyA, PlentyD, sizePlentyD);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyA, sizePlentyA, PlentyD, sizePlentyD);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'E':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyA, sizePlentyA, PlentyE, sizePlentyE);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyA, sizePlentyA, PlentyE, sizePlentyE);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyA, sizePlentyA, PlentyE, sizePlentyE);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyA, sizePlentyA, PlentyE, sizePlentyE);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'B':
				{
					switch (secondPlenty)
					{
					case 'B':
					{
						switch (operation)
						{
						case '+':
						{
							cout << "Result = [ ";
							print(PlentyB, sizePlentyB);
							cout << "]" << endl;
							break;
						}
						case '*':
						{
							cout << "Result = [ ";
							print(PlentyB, sizePlentyB);
							cout << "]" << endl;
							break;
						}
						case '\\':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						case '%':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'A':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyB, sizePlentyB, PlentyA, sizePlentyA);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyB, sizePlentyB, PlentyA, sizePlentyA);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyB, sizePlentyB, PlentyA, sizePlentyA);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyB, sizePlentyB, PlentyA, sizePlentyA);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'C':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyB, sizePlentyB, PlentyC, sizePlentyC);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyB, sizePlentyB, PlentyC, sizePlentyC);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyB, sizePlentyB, PlentyC, sizePlentyC);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyB, sizePlentyB, PlentyC, sizePlentyC);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'D':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyB, sizePlentyB, PlentyD, sizePlentyD);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyB, sizePlentyB, PlentyD, sizePlentyD);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyB, sizePlentyB, PlentyD, sizePlentyD);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyB, sizePlentyB, PlentyD, sizePlentyD);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'E':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyB, sizePlentyB, PlentyE, sizePlentyE);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyB, sizePlentyB, PlentyE, sizePlentyE);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyB, sizePlentyB, PlentyE, sizePlentyE);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyB, sizePlentyB, PlentyE, sizePlentyE);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'C':
				{
					switch (secondPlenty)
					{
					case 'C':
					{
						switch (operation)
						{
						case '+':
						{
							cout << "Result = [ ";
							print(PlentyC, sizePlentyC);
							cout << "]" << endl;
							break;
						}
						case '*':
						{
							cout << "Result = [ ";
							print(PlentyC, sizePlentyC);
							cout << "]" << endl;
							break;
						}
						case '\\':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						case '%':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'A':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyC, sizePlentyC, PlentyA, sizePlentyA);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyC, sizePlentyC, PlentyA, sizePlentyA);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyC, sizePlentyC, PlentyA, sizePlentyA);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyC, sizePlentyC, PlentyA, sizePlentyA);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'B':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyC, sizePlentyC, PlentyB, sizePlentyB);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyC, sizePlentyC, PlentyB, sizePlentyB);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyC, sizePlentyC, PlentyB, sizePlentyB);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyC, sizePlentyC, PlentyB, sizePlentyB);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'D':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyC, sizePlentyC, PlentyD, sizePlentyD);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyC, sizePlentyC, PlentyD, sizePlentyD);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyC, sizePlentyC, PlentyD, sizePlentyD);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyC, sizePlentyC, PlentyD, sizePlentyD);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'E':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyC, sizePlentyC, PlentyE, sizePlentyE);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyC, sizePlentyC, PlentyE, sizePlentyE);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyC, sizePlentyC, PlentyE, sizePlentyE);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyC, sizePlentyC, PlentyE, sizePlentyE);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'D':
				{
					switch (secondPlenty)
					{
					case 'D':
					{
						switch (operation)
						{
						case '+':
						{
							cout << "Result = [ ";
							print(PlentyD, sizePlentyD);
							cout << "]" << endl;
							break;
						}
						case '*':
						{
							cout << "Result = [ ";
							print(PlentyD, sizePlentyD);
							cout << "]" << endl;
							break;
						}
						case '\\':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						case '%':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'A':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyD, sizePlentyD, PlentyA, sizePlentyA);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyD, sizePlentyD, PlentyA, sizePlentyA);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyD, sizePlentyD, PlentyA, sizePlentyA);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyD, sizePlentyD, PlentyA, sizePlentyA);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'B':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyD, sizePlentyD, PlentyB, sizePlentyB);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyD, sizePlentyD, PlentyB, sizePlentyB);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyD, sizePlentyD, PlentyB, sizePlentyB);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyD, sizePlentyD, PlentyB, sizePlentyB);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'C':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyD, sizePlentyD, PlentyC, sizePlentyC);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyD, sizePlentyD, PlentyC, sizePlentyC);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyD, sizePlentyD, PlentyC, sizePlentyC);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyD, sizePlentyD, PlentyC, sizePlentyC);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'E':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyD, sizePlentyD, PlentyE, sizePlentyE);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyD, sizePlentyD, PlentyE, sizePlentyE);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyD, sizePlentyD, PlentyE, sizePlentyE);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyD, sizePlentyD, PlentyE, sizePlentyE);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'E':
				{
					switch (secondPlenty)
					{
					case 'E':
					{
						switch (operation)
						{
						case '+':
						{
							cout << "Result = [ ";
							print(PlentyE, sizePlentyE);
							cout << "]" << endl;
							break;
						}
						case '*':
						{
							cout << "Result = [ ";
							print(PlentyE, sizePlentyE);
							cout << "]" << endl;
							break;
						}
						case '\\':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						case '%':
						{
							cout << "Result = [ 0 ]";
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'A':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyE, sizePlentyE, PlentyA, sizePlentyA);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyE, sizePlentyE, PlentyA, sizePlentyA);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyE, sizePlentyE, PlentyA, sizePlentyA);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyE, sizePlentyE, PlentyA, sizePlentyA);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'B':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyE, sizePlentyE, PlentyB, sizePlentyB);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyE, sizePlentyE, PlentyB, sizePlentyB);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyE, sizePlentyE, PlentyB, sizePlentyB);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyE, sizePlentyE, PlentyB, sizePlentyB);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'C':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyE, sizePlentyE, PlentyC, sizePlentyC);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyE, sizePlentyE, PlentyC, sizePlentyC);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyE, sizePlentyE, PlentyC, sizePlentyC);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyE, sizePlentyE, PlentyC, sizePlentyC);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'D':
					{
						switch (operation)
						{
						case '+':
						{
							operationUnification(PlentyE, sizePlentyE, PlentyD, sizePlentyD);
							break;
						}
						case '*':
						{
							operationIntersection(PlentyE, sizePlentyE, PlentyD, sizePlentyD);
							break;
						}
						case '\\':
						{
							operationDifference(PlentyE, sizePlentyE, PlentyD, sizePlentyD);
							break;
						}
						case '%':
						{
							operationSymmetricDifference(PlentyE, sizePlentyE, PlentyD, sizePlentyD);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'e':
				{
					system("cls");
					BoolOperationOnSets = false;
					break;
				}
				default:
					system("cls");
					cout << "**********************************" << endl;
					cout << ">��������� - �������� " << firstPlenty << " �� ������" << endl;
					cout << "**********************************" << endl;
					break;
				}
			}
			break;
		}
		case 4://��������� ��������� (������ ��������� � ������ (�<B))
		{
			if (Universum == nullptr)
			{
				system("cls");
				cout << "**********************" << endl;
				cout << ">��������� �����" << endl;
				cout << "**********************" << endl;
				break;
			}
			bool BoolOperationOnSets = true;
			while (BoolOperationOnSets)
			{

				char firstPlenty, secondPlenty, operation;
				cout << "\n�����(ext)" << endl;
				cout << "��������: Plenty<Plenty" << endl;
				cout << "�������: ";
				cin >> firstPlenty >> operation >> secondPlenty;
				switch (firstPlenty)
				{
				case 'A':
				{
					switch (secondPlenty)
					{
					case 'A':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyA, sizePlentyA, PlentyA, sizePlentyA);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'B':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyA, sizePlentyA, PlentyB, sizePlentyB);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'C':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyA, sizePlentyA, PlentyC, sizePlentyC);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'D':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyA, sizePlentyA, PlentyD, sizePlentyD);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'E':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyA, sizePlentyA, PlentyE, sizePlentyE);
							break;
						}
						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'B':
				{
					switch (secondPlenty)
					{
					case 'B':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyB, sizePlentyB, PlentyB, sizePlentyB);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'A':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyB, sizePlentyB, PlentyA, sizePlentyA);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'C':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyB, sizePlentyB, PlentyC, sizePlentyC);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'D':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyB, sizePlentyB, PlentyD, sizePlentyD);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'E':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyB, sizePlentyB, PlentyE, sizePlentyE);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'C':
				{
					switch (secondPlenty)
					{
					case 'C':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyC, sizePlentyC, PlentyC, sizePlentyC);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'A':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyC, sizePlentyC, PlentyA, sizePlentyA);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'B':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyC, sizePlentyC, PlentyB, sizePlentyB);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'D':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyC, sizePlentyC, PlentyD, sizePlentyD);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'E':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyC, sizePlentyC, PlentyE, sizePlentyE);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'D':
				{
					switch (secondPlenty)
					{
					case 'D':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyD, sizePlentyD, PlentyD, sizePlentyD);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'A':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyD, sizePlentyD, PlentyA, sizePlentyA);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'B':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyD, sizePlentyD, PlentyB, sizePlentyB);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'C':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyD, sizePlentyD, PlentyC, sizePlentyC);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'E':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyD, sizePlentyD, PlentyE, sizePlentyE);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'E':
				{
					switch (secondPlenty)
					{
					case 'E':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyE, sizePlentyE, PlentyE, sizePlentyE);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'A':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyE, sizePlentyE, PlentyA, sizePlentyA);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'B':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyE, sizePlentyE, PlentyB, sizePlentyB);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'C':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyE, sizePlentyE, PlentyC, sizePlentyC);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					case 'D':
					{
						switch (operation)
						{
						case '<':
						{
							operationCheckOccurrence(PlentyE, sizePlentyE, PlentyD, sizePlentyD);
							break;
						}

						default:
							system("cls");
							cout << "**********************************" << endl;
							cout << ">��������� - �������� " << operation << " �� ������" << endl;
							cout << "**********************************" << endl;
							break;
						}
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'e':
				{
					system("cls");
					BoolOperationOnSets = false;
					break;
				}
				default:
					system("cls");
					cout << "**********************************" << endl;
					cout << ">��������� - �������� " << firstPlenty << " �� ������" << endl;
					cout << "**********************************" << endl;
					break;
				}
			}
			break;
		}
		case 5: //��������� ��������� ������� � ��������
		{
			bool BoolOperationOnSets = true;
			while (BoolOperationOnSets)
			{
				int num;
				char Plenty, operation;
				cout << "\n�����(7 77)" << endl;
				cout << "��������: num < Plenty" << endl;
				cout << "�������: ";
				cin >> num >> operation >> Plenty;
				switch (operation)
				{
				case '<':
				{
					switch (Plenty)
					{
					case 'U':
					{
						if (Universum == nullptr)
						{
							system("cls");
							cout << "**********************" << endl;
							cout << ">��������� �����" << endl;
							cout << "**********************" << endl;
							break;
						}
						operationAdditionNum(Universum, sizeUniversum, num);
						break;
					}
					case 'A':
					{
						if (PlentyA == nullptr)
						{
							system("cls");
							cout << "**********************" << endl;
							cout << "> �������� " << Plenty << " �����" << endl;
							cout << "**********************" << endl;
							break;
						}
						operationAdditionNum(PlentyA, sizePlentyA, num);
						break;
					}
					case 'B':
					{
						if (PlentyB == nullptr)
						{
							system("cls");
							cout << "**********************" << endl;
							cout << "> �������� " << Plenty << " �����" << endl;
							cout << "**********************" << endl;
							break;
						}
						operationAdditionNum(PlentyB, sizePlentyB, num);
						break;
					}
					case 'C':
					{
						if (PlentyC == nullptr)
						{
							system("cls");
							cout << "**********************" << endl;
							cout << "> �������� " << Plenty << " �����" << endl;
							cout << "**********************" << endl;
							break;
						}
						operationAdditionNum(PlentyC, sizePlentyC, num);
						break;
					}
					case 'D':
					{
						if (PlentyD == nullptr)
						{
							system("cls");
							cout << "**********************" << endl;
							cout << "> �������� " << Plenty << " �����" << endl;
							cout << "**********************" << endl;
							break;
						}
						operationAdditionNum(PlentyD, sizePlentyD, num);
						break;
					}
					case 'E':
					{
						if (PlentyE == nullptr)
						{
							system("cls");
							cout << "**********************" << endl;
							cout << "> �������� " << Plenty << " �����" << endl;
							cout << "**********************" << endl;
							break;
						}
						operationAdditionNum(PlentyE, sizePlentyE, num);
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << Plenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case '7':
				{
					system("cls");
					BoolOperationOnSets = false;
					break;
				}
				default:
					system("cls");
					cout << "**********************************" << endl;
					cout << ">��������� - �������� " << operation << " �� ������" << endl;
					cout << "**********************************" << endl;
					break;
				}
			}
			break;
		}
		case 6://��������� �� ����������
		{
			bool BoolOperationOnSets = true;
			while (BoolOperationOnSets)
			{

				char secondPlenty, operation;
				cout << "\n�����(ex)" << endl;
				cout << "��������: !Plenty" << endl;
				cout << "�������: ";
				cin >> operation >> secondPlenty;
				switch (operation)
				{
				case '!':
				{
					switch (secondPlenty)
					{
					case 'A':
					{
						operationAddition(PlentyA, sizePlentyA, Universum, sizeUniversum);
						break;
					}
					case 'B':
					{
						operationAddition(PlentyB, sizePlentyB, Universum, sizeUniversum);
						break;
					}
					case 'C':
					{
						operationAddition(PlentyC, sizePlentyC, Universum, sizeUniversum);
						break;
					}
					case 'D':
					{
						operationAddition(PlentyD, sizePlentyD, Universum, sizeUniversum);
						break;
					}
					case 'E':
					{
						operationAddition(PlentyE, sizePlentyE, Universum, sizeUniversum);
						break;
					}
					default:
						system("cls");
						cout << "**********************************" << endl;
						cout << ">��������� - �������� " << secondPlenty << " �� ������" << endl;
						cout << "**********************************" << endl;
						break;
					}
					break;
				}
				case 'e':
				{
					system("cls");
					BoolOperationOnSets = false;
					break;
				}
				default:
				{
					system("cls");
					cout << "**********************************" << endl;
					cout << ">��������� - �������� " << operation << " �� ������" << endl;
					cout << "**********************************" << endl;
					break;
				}
				}
			}
			break;
		}
		case 7:// ��������� ���������
		{
			BoolSelectAction = false;
			cout << "��������� ���������!" << endl;
			break;
		}
		default:
			system("cls");
			cout << "**********************************" << endl;
			cout << ">��������� - ������ �������� �����" << endl;
			cout << "**********************************" << endl;
			break;
		}
	}

}