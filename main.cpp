#include <iostream>
#include<conio.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int search_record(char*,int);
int show_record(int);
int store_record(int);
int edit_record(char*,int);
int delete_record(char*,int);
int main() {
	printf("hello World");
	int op;
	int total=0;
    char ID[10];
	do
	{
		printf("chosse\n\t<1> add\n\t<2> delete\n\t<3> update\n\t<4> view all record\n\t<5> avarage of selected student course\n\t<6> max total score\n\t<7>  min total score\n\t<8> find student using ID\n\t<9> short record by score\n\t<0> To Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &op);
		switch(op)
		{
			case 1: //total=store_record(total);
					break;
			case 2: printf("\nEnter the ID to delete data: ");
					scanf(" %[^\n]",ID);
					//total=delete_record(ID,total);
					break; 
			case 3:
                    printf("\nEnter the ID to update data: ");
					scanf(" %[^\n]",ID);
					//total=edit_record(ID,total);
					break; 
            case 8:
                    printf("\nEnter the ID number to search student data: ");
					scanf(" %[^\n]", ID);
					//total=search_record(ID,total);
					break;
			case 4: 
                    //total=show_record(total);
					break;
			case 5:
            break;
            case 6:
            break;
            case 7:
            break;
            case 9:
            break;
            
			case 0: printf("\n\tOk .. terminating.............\n");
                break;
			default:printf("\n\terror....Enter the correct choice!");
		}
	}while(op!=0);
	getch();
	return 0;
}
