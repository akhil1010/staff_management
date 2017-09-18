#include<fstream.h>
#include<iostream.h>
#include<string.h>
#include<iomanip.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<graphics.h>


void bor()
{
textcolor(CYAN);
for(int i=1;i<81;i++)
{
gotoxy(i,1);
delay(10);
cprintf("л");
 gotoxy(i,24);
 cprintf("л");
 }
 gotoxy(1,24);
  for(i=1;i<24;i++)
 {
 gotoxy(80,i);
 delay(10);
 cprintf("л");
 gotoxy(1,i);
cprintf("л");
}

}


void pepsico()
{
clrscr();
bor();
gotoxy(2,4);

cout<< "         лллллллллллллллллллл                       ллллллллллл     ";
gotoxy(2,5);
cout<< "    лллллллллллллллллллллллллллл               лллллл          лл     ";
gotoxy(2,6);
cout<< "    лл                          лллллллллллллллл                 лл    ";
gotoxy(2,7);
cout<< "      лл                                                           ллллллллл";
gotoxy(2,8);
cout<< "       лл   ллллллл  лллллл  ллллллл  ллллл  лллллл ллллл  лллллл  лл      л";
gotoxy(2,9);
cout<< "      лл    лл   лл  лл      лл   лл  лл       лл   лл     лл  лл  Ю       л";
gotoxy(2,10);
cout<< "    ллл     лл   лл  лллл    лл   лл  ллллл    лл   лл     лл  лл  Ю       л";
gotoxy(2,11);
cout<< "    ллл     ллллллл  лл      ллллллл     лл    лл   лл     лл  лл  Ю       л";
gotoxy(2,12);
cout<< "      лл    лл       лл      лл          лл    лл   лл     лл  лл  Ю       л";
gotoxy(2,13);
cout<< "       лл   лл       лллллл  лл       ллллл  лллллл ллллл  лллллл  лл      л";
gotoxy(2,14);
cout<< "      лл                                                           ллллллллл";
gotoxy(2,15);
cout<< "    лл                          лллллллллллллллл                 лл       ";
gotoxy(2,16);
cout<< "    лллллллллллллллллллллллллллл               ллллллл         лл          ";
gotoxy(2,17);
cout<< "          лллллллллллллллллллл                       лллллллллл            ";
gotoxy(2,18);
cout<< "                                                                           ";
gotoxy(2,19);
cout<< "                                                                         ";
gotoxy(2,21);
textcolor(GREEN);
cprintf("                      PEPSICO STAFF MANAGEMENT :-     ");
gotoxy(2,22);
textcolor(YELLOW);
cprintf("                      ------------------------  ");
getch();
}

void welcome()
{
clrscr();
{
textcolor(GREEN);
for (int i=0;i<80;i++)
cprintf("л");
}
{
textcolor(BLUE);
for(int i=0;i<46;i++)
cout<<"л"<<"\n";
textcolor(GREEN);
for(i=0;i<80;i++)
cprintf("л");
i=2;
while(i<48)
{
textcolor(BLUE);
gotoxy(80,i);
cout<<"л";
gotoxy(80,i++);
}
gotoxy(5,4);
delay(35);
textcolor(CYAN+BLINK);
cprintf("W     W");
gotoxy(5,5);
delay(35);
textcolor(CYAN+BLINK);
cprintf("W     W");
gotoxy(5,6);
delay(35);
textcolor(CYAN+BLINK);
cprintf("W     W");
gotoxy(5,7);
delay(35);
textcolor(CYAN+BLINK);
cprintf("W     W");
gotoxy(5,8);
delay(35);
textcolor(CYAN+BLINK);
cprintf("W  W  W");
gotoxy(5,9);
delay(35);
textcolor(CYAN+BLINK);
cprintf("W W W W");
gotoxy(5,10);
delay(35);
textcolor(CYAN+BLINK);
cprintf("WW   WW");
gotoxy(14,4);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("EEEEEEE");
gotoxy(14,5);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("EE");
gotoxy(14,6);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("EE");
gotoxy(14,7);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("EEEEEEE");
gotoxy(14,8);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("EE");
gotoxy(14,9);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("EE");
gotoxy(14,10);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("EEEEEEE");
gotoxy(24,4);
textcolor(MAGENTA+BLINK);
delay(35);
cprintf("LL");
gotoxy(24,5);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("LL");
gotoxy(24,6);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("LL");
gotoxy(24,7);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("LL");
gotoxy(24,8);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("LL");
gotoxy(24,9);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("LLLLLLL");
gotoxy(24,10);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("LLLLLLL");
gotoxy(34,4);
delay(35);
textcolor(RED+BLINK);
cprintf("  ccccc");
gotoxy(34,5);
delay(35);
textcolor(RED+BLINK);
cprintf(" c");
gotoxy(34,6);
delay(35);
textcolor(RED+BLINK);
cprintf("c");
gotoxy(34,7);
delay(35);
textcolor(RED+BLINK);
cprintf("c");
gotoxy(34,8);
delay(35);
textcolor(RED+BLINK);
cprintf("c");
gotoxy(34,9);
delay(35);
textcolor(RED+BLINK);
cprintf(" c");
gotoxy(34,10);
delay(35);
textcolor(RED+BLINK);
cprintf("  ccccc");
gotoxy(44,4);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("  OOO  ");
gotoxy(44,5);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf(" O   O ");
gotoxy(44,6);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("O     O");
gotoxy(44,7);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("O     O");
gotoxy(44,8);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("O     O");
gotoxy(44,9);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf(" O   O  ");
gotoxy(44,10);
delay(35);
textcolor(MAGENTA+BLINK);
cprintf("  OOO  ");
gotoxy(54,4);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("M     M");
gotoxy(54,5);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("MM   MM");
gotoxy(54,6);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("M M M M");
gotoxy(54,7);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("M  M  M");
gotoxy(54,8);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("M     M");
gotoxy(54,9);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("M     M");
gotoxy(54,10);
delay(35);
textcolor(YELLOW+BLINK);
cprintf("M     M");
gotoxy(64,4);
delay(35);
textcolor(CYAN+BLINK);
cprintf("EEEEEEE");
gotoxy(64,5);
delay(35);
textcolor(CYAN+BLINK);
cprintf("EE");
gotoxy(64,6);
delay(35);
textcolor(CYAN+BLINK);
cprintf("EE");
gotoxy(64,7);
delay(35);
textcolor(CYAN+BLINK);
cprintf("EEEEEEE");
gotoxy(64,8);
delay(35);
textcolor(CYAN+BLINK);
cprintf("EE");
gotoxy(64,9);
delay(35);
textcolor(CYAN+BLINK);
cprintf("EE");
gotoxy(64,10);
delay(35);
textcolor(CYAN+BLINK);
cprintf("EEEEEEE");
gotoxy(4,12);
delay(35);
textcolor(BLUE );
cprintf("___________________________________________________________________");
gotoxy(4,14);
delay(35);
textcolor(RED+BLINK);
cprintf("                             C++ PROJECT  ");
gotoxy(4,15);
delay(35);
textcolor(BLUE);
cprintf("                             ____________");
gotoxy(4,42);
delay(35);
textcolor(GREEN);
cprintf(" Made By:-      "     )  ;
gotoxy(4,44);
delay(35);
textcolor(CYAN);
cprintf("AKHIL UPADHYAY");
gotoxy(4,45);
delay(35);
textcolor(CYAN);
cprintf("DHAVAL VASANI");
gotoxy(4,46);
delay(35);
textcolor(CYAN);
cprintf("ZAIN BAZAZ");


gotoxy(28,18);
delay(35);
textcolor(YELLOW);
cprintf("лллллллллллллллллллллл");
gotoxy(28,19);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,20);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,21);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,22);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,23);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,24);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,25);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,26);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,27);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,28);
delay(35);
textcolor(YELLOW);
cprintf("лллллллллллллллллллллл");
gotoxy(35,29);
delay(35);
textcolor(YELLOW);
cprintf("ллллллл");
gotoxy(35,30);
delay(35);
textcolor(YELLOW);
cprintf("лллллл");
gotoxy(35 ,31);
delay(35);
textcolor(YELLOW);
cprintf("ллллллл");
gotoxy(35,32);
delay(35);
textcolor(YELLOW);
cprintf("ллллллл");
gotoxy(28,33);
delay(35);
textcolor(YELLOW);
cprintf("лллллллллллллллллллллл");
gotoxy(28,34);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,35);
delay(35);
textcolor(YELLOW);
cprintf("лл                  лл");
gotoxy(28,36);
delay(35);
textcolor(YELLOW);
cprintf("лллллллллллллллллллллл");
				      // ллпппппппппп //
				    // ллпппппппппп //
				     // ллпппппппппп //

getch();
}
}

class employee
{
 public:
 char name[30];
 long int code;
 char designation[20];
 int exp;
 int age;
 int i;
 long salary;
 void build();
 void deletes();
 void addfile();
 void display(int);
 void update();
 void insert();
 void search();
 void list();

}st;

employee ob1;

void employee::build()
{
 clrscr();
 bor();
 gotoxy(10,3);
 textcolor(MAGENTA+BLINK);
 cprintf("                      Enter The Entries :-");
 gotoxy(10,4);
 textcolor(YELLOW);
 cprintf("                     ----------------------");
 gotoxy(2,6);
 textcolor(GREEN);
 cprintf("           Name                 	       ");
 cin>>name;
 gotoxy(2,8);
 textcolor(YELLOW);
 cprintf("           Code                 	       ");
 cin>>code;
 gotoxy(2,10);
 textcolor(RED);
 cprintf("           Designation          	       ");
 cin>>designation;
 textcolor(CYAN);
 gotoxy(2,12);
 cprintf("           Years of Experience  	       ");
 cin>>exp;
 gotoxy(2,14);
 textcolor(BLUE);
 cprintf("           Age                  	       ");
 cin>>age;
 gotoxy(2,16);
 textcolor(GREEN);
 cprintf("           Salary               	       ");
 cin>>salary;
 }

 void employee::display(int i)
{
//clrscr();//
 bor();
 gotoxy(10,4);
 textcolor(MAGENTA+BLINK);
 cprintf("              ********Display The Record********");
 gotoxy(10,5);
 textcolor(BLUE);
 cprintf("             ------------------------------------");
 gotoxy(3,7);
 textcolor(GREEN);
 cprintf("        Name         Code      Designation   Years(EXP)   Age   Salary");
 gotoxy(3,8);
 textcolor(RED);
 cprintf("  ---------------------------------------------------------------------");
  gotoxy(5,9+i);
  textcolor(BLUE);
  cprintf(name);
  gotoxy(27,9+i);
  textcolor(YELLOW);
  cout<<code;
  gotoxy(35,9+i);
  cout<<designation;
  gotoxy(51,9+i);
  textcolor(RED);
  cout<<exp;
  gotoxy(61,9+i);
  textcolor(YELLOW);
  cout<<age;
  gotoxy(68,9+i);
  textcolor(BLUE);
  cout<<salary;
  gotoxy(10,20);
  textcolor(YELLOW);
  cprintf("      going to main menu...");
  getch();
  }


 void employee::search()
{
clrscr();
bor();
ifstream fil("staff.dat",ios::binary);
int p;
gotoxy(15,5);
cout<<"Enter the employee code searched:";
cin>>p;
fil.seekg(0,ios::beg);
while(fil)
{

fil.read((char*)&ob1,sizeof(ob1));
if(ob1.code==p)
{
gotoxy(6,10);
ob1.display(0);
}
}
fil.close();
}

  void employee::update()
{
clrscr();
    bor();
    int num;
    gotoxy(15,2);
    cout<<"Enter code of employee whose record you want to modify :-";
    cin>>num;
    fstream f9("staff.dat", ios::in|ios::out);
    f9.seekg(0, ios::beg);


    while( f9)
    {
      f9.read((char*)&ob1, sizeof(ob1));
      int a=f9.tellg();
	if (ob1.code==num)
	{
	    gotoxy(15,5);
	    cout<<"ENTER STAFF MEMBER TO BE MODIFIED:";
	    f9.seekg(a-sizeof(ob1), ios::beg);
	    ob1.addfile();
	    f9.write((char*)&ob1, sizeof(ob1));
	}

    }
    f9.close();
}

 void employee::deletes()
{  clrscr();
    char b[20];
    bor();

    ifstream f2("staff.dat", ios::app);

    ofstream f3("temp.dat", ios::app);
    gotoxy(8,5);
    cout<<"Enter the name of the staff member whose";
    gotoxy(8,6);
    cout<<"records you want to delete : ";
    gets(b);
    f2.seekg (0, ios::beg);
    f2.read((char*)&st, sizeof(st));
    while(f2)
    {
	if (strcmpi(b, name))
	    f3.write((char*)&st, sizeof(st));
	    f2.read((char*)&st, sizeof(st));
    }
    f2.close();
    f3.close();
    remove ("staff.dat");
    rename("temp.dat", "staff.dat");
}

void employee::addfile()
  {
  clrscr();
  ofstream f1("staff.dat",ios::binary|ios::app);
  if(f1)
  {
  char a;
  do
  {
  st.build();
  f1.write((char*)&st,sizeof(st));
  gotoxy(10,19);
  cout<<"          Do you want to add more details:?";
  gotoxy(10,20);
  cout<<"          Press (Y/N) : ";
  cin>>a;
  }
  while(a=='y');
  }
  else
  cout<<" File cannot be opened:";
  f1.close();
  }

  void employee::insert()
  {
  clrscr();

  ofstream f6("staff.dat",ios::binary|ios::app);
  if(f6)
  {
  char a;
  do
  {
  st.build();
  f6.write((char*)&st,sizeof(st));
  gotoxy(10,19);
  cout<<"    Do you want to add more details:?";
  gotoxy(10,20);
  cout<<"    Press (Y/N) : ";
  cin>>a;
  a=toupper(a);
  }
  while(a=='Y');
  }
  else
  cout<<"        File cannot be opened.......:";
  f6.close();
  }

void main()
{
 clrscr();
 welcome();
 pepsico();
 void sort();
 char option;
 void menu();
 menu();
 while((option=cin.get())!='q')
 {
  switch(option)
  {
   case 'b':
		     st.addfile();
		     break;
   case 'l':
		     st.list();
		     break;
   case 'i':
		     st.insert();
		     break;
   case 'd':
		     st.deletes();
		     break;
   case 'e':
		     st.update();
		     break;
   case 's':
		     st.search();
		     break;

  }
   menu();
  }
 }
 void employee::list()

{

int j=0;
clrscr();
bor();
ifstream fil("staff.dat",ios::binary);
fil.seekg(0,ios::beg);
while(fil)
{
 ++j;
fil.read((char*)&ob1,sizeof(ob1));

gotoxy(6,10);
ob1.display(j);

}
}





 void menu()
 {
  clrscr();
  bor();
gotoxy(10,3);
textcolor(GREEN+BLINK);
cprintf("            *****WelCome To Staff Data Centre*****");
gotoxy(2,6);
textcolor(RED);
cprintf("                    Press  b---->Built The Employee Table");// лллпппппппппп //
gotoxy(2,8);
textcolor(YELLOW);
cprintf("                    Press  l---->List The Employee Table");
gotoxy(2,10);
textcolor(BLUE);
cprintf("                    Press  i---->Insert New Entry");
gotoxy(2,12);
textcolor(MAGENTA);
cprintf("                    Press  d---->Delete An Entry");
gotoxy(2,14);
textcolor(RED);
cprintf("                    Press  e---->Update An Entry");
gotoxy(2,16);
textcolor(GREEN);
cprintf("                    Press  s---->Search A Record");
gotoxy(2,18);
textcolor(CYAN);
cprintf("                    Press  q---------->QUIT");
gotoxy(2,21);
textcolor(GREEN);
cout<<"          Option Please ---------";
}


