#include <stdio.h>
#include <locale.h>
enum Mark { two = 2, three = 3, four = 4, five = 5 };
struct Exam_Mark {
	_Bool mark_credit;
	enum Mark exam_mark;
};
struct Subject {
	char *name_subject;
	char *exam_date;
	char *teacher_surname;
	struct Exam_Mark mark;
};
struct Term {
	int number;
	char *year;
	struct Subject subjectInfo[10];
};
struct Zachetka {
	char *Name;
	char *Surname;
	char *Middle_name;
	int Number_book;
	struct Term termsInfo[3];
};
void main() {
	setlocale(LC_ALL, "Russian");
	struct Zachetka My_book;
	My_book.Name = "Анастасия";
	My_book.Surname = "Свистунова";
	My_book.Middle_name = "Игоревна";
	My_book.Number_book = 17137;
	My_book.termsInfo[0].number = 1;
	My_book.termsInfo[1].number = 2;
	My_book.termsInfo[2].number = 3;
	My_book.termsInfo[0].year = "2017-2018";
	My_book.termsInfo[1].year = "2017-2018";
	My_book.termsInfo[2].year = "2018-2019";

	My_book.termsInfo[0].subjectInfo[0].name_subject = "Философия";
	My_book.termsInfo[0].subjectInfo[0].mark.mark_credit = 0;
	My_book.termsInfo[0].subjectInfo[0].mark.exam_mark = five;
	My_book.termsInfo[0].subjectInfo[0].exam_date = "30.01.18";
	My_book.termsInfo[0].subjectInfo[0].teacher_surname = "Плужникова";

	My_book.termsInfo[0].subjectInfo[1].name_subject = "Аналитическая геометрия и линейная алгебра";
	My_book.termsInfo[0].subjectInfo[1].mark.mark_credit = 0;
	My_book.termsInfo[0].subjectInfo[1].mark.exam_mark = four;
	My_book.termsInfo[0].subjectInfo[1].exam_date = "23.01.18";
	My_book.termsInfo[0].subjectInfo[1].teacher_surname = "Пискарев";

	My_book.termsInfo[0].subjectInfo[2].name_subject = "Высшая математика";
	My_book.termsInfo[0].subjectInfo[2].mark.mark_credit = 0;
	My_book.termsInfo[0].subjectInfo[2].mark.exam_mark = three;
	My_book.termsInfo[0].subjectInfo[2].exam_date = "28.02.18";
	My_book.termsInfo[0].subjectInfo[2].teacher_surname = "Лакерник"; \

		My_book.termsInfo[0].subjectInfo[3].name_subject = "Введение в профессию";
	My_book.termsInfo[0].subjectInfo[3].mark.mark_credit = 1;
	My_book.termsInfo[0].subjectInfo[3].exam_date = "22.12.17";
	My_book.termsInfo[0].subjectInfo[3].teacher_surname = "Гоисеров";

	My_book.termsInfo[0].subjectInfo[4].name_subject = "Русский язык и культура речи";
	My_book.termsInfo[0].subjectInfo[4].mark.mark_credit = 1;
	My_book.termsInfo[0].subjectInfo[4].exam_date = "26.12.17";
	My_book.termsInfo[0].subjectInfo[4].teacher_surname = "Невзорова";

	My_book.termsInfo[0].subjectInfo[5].name_subject = "Информатика";
	My_book.termsInfo[0].subjectInfo[5].mark.mark_credit = 1;
	My_book.termsInfo[0].subjectInfo[5].exam_date = "27.12.17";
	My_book.termsInfo[0].subjectInfo[5].teacher_surname = "Загвосткина";
	_Bool Menu = 1;
	while (Menu == 1) {
		system("cls");
		int number;
		printf("Студент группы БИК1702\nФакультет ОТФ-1\nФамилия: %s\nИмя: %s\nОтчество: %s\nНомер зачетной книжки: 1БИК%d\n", My_book.Surname, My_book.Name, My_book.Middle_name, My_book.Number_book);
		printf("1 Семестр\n2 Семестр\n3 Семестр\nДля выхода из программы нажмите 4\nВыберите семестр: ");
		scanf("%d", &number);
		switch (number)
		{
		case 1: {
			_Bool subject_list = 1;
			while (subject_list == 1) {
				system("cls");
				int exam_subject;
				printf("1 Семестр\nПериод обучения: %s\nПредметы:\n", My_book.termsInfo[0].year);
				for (int i = 0; i < 6; i++) {
					printf("%d. %s\n", i + 1, My_book.termsInfo[0].subjectInfo[i].name_subject);
				}
				printf("Нажмите 7 чтобы вернуться к меню семестров\n");
				printf("Выберите предмет: ");
				scanf("%d", &exam_subject);
				switch (exam_subject)
				{
				case 1: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[0].name_subject, My_book.termsInfo[0].subjectInfo[0].mark.exam_mark, My_book.termsInfo[0].subjectInfo[0].teacher_surname);
					getch();
					break;
				}
				case 2: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[1].name_subject, My_book.termsInfo[0].subjectInfo[1].mark.exam_mark, My_book.termsInfo[0].subjectInfo[1].teacher_surname);
					getch();
					break;
				}
				case 3: {
					system("cls");
					printf("Предмет: %s\nОценка: %d\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[2].name_subject, My_book.termsInfo[0].subjectInfo[2].mark.exam_mark, My_book.termsInfo[0].subjectInfo[2].teacher_surname);
					getch();
					break;
				}
				case 4: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[3].name_subject, My_book.termsInfo[0].subjectInfo[3].mark.mark_credit, My_book.termsInfo[0].subjectInfo[3].teacher_surname);
					getch();
					break;
				}
				case 5: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[4].name_subject, My_book.termsInfo[0].subjectInfo[4].mark.mark_credit, My_book.termsInfo[0].subjectInfo[4].teacher_surname);
					getch();
					break;
				}
				case 6: {
					system("cls");
					printf("Предмет: %s\nЗачет: %d\nПреподаватель: %s\nНажмите любую кнопку, чтобы вернуться к меню предметов.", My_book.termsInfo[0].subjectInfo[5].name_subject, My_book.termsInfo[0].subjectInfo[5].mark.mark_credit, My_book.termsInfo[0].subjectInfo[5].teacher_surname);
					getch();
					break;
				}
				case 7:
					subject_list = 0;
					break;
				default:
					break;
				}
			}
		}
		case 2: {

			break;
		}
		case 3: {

			break;
		}
		case 4: {
			Menu = 0;
			break;
		}
		default:
			break;
		}
	}
	system("pause");
}