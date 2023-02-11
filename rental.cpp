#include <iostream>
#include <fstream> // for file handling
#include <conio.h>
#include <stdlib.h> // for standard library function
#include <unistd.h> //portable operating system
#include <direct.h> //for delay function
#include <iomanip>  //used to set base field flag
// included required library files
using namespace std;
class customer // customer class
{
private:
public:
  string customerfirst;
  string customernumber;
  string carna;

  string carmodel;
  string carnumber;
  string pay;
  char data;
  // variables defined in this class in public mode.
};
class rent : public customer // inhereted class from customer class
{
public:
  int days = 0, rentalfee = 0, gst, total, z=0,m,n,o,p; // additional int vatiables defined
  void data()
  {
    int login();
    login();
    cout << "\t\t\t\tPlease Enter your first Name: "; // taking data from the user
    cin >> customerfirst;
    cout << endl;
    cout << "\t\t\t\tPlease Enter your Mobile Number: "; // taking number from  the user
    cin >> customernumber;
    cout << endl;
    start:
    cout << "\t\t\t\tSUV Cars are rented Between 50 to 150 Per Day"<<endl;
    cout << "\t\t\t\tSports Cars are rented Between 100 to 200 Per Day"<<endl;
    cout << "\t\t\t\tRoyal Cars are rented Between 250 to 350 Per Day"<<endl;
    cout << "\t\t\t\tPress 1 For SUV Cars"<<endl;
    cout << "\t\t\t\tPress 2 For Sports Cars"<<endl;
    cout << "\t\t\t\tPress 3 For Royal Cars"<<endl;
    cout <<"Enter your Choice:";
    cin  >> o;
    switch(o)
    {
      case 1:
      do
      {
      cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
      cout << "\t\t\t\tEnter 'A' for Mahindra XUV 700" << endl;
      cout << "\t\t\t\tEnter 'B' for BMW X5." << endl;
      cout << "\t\t\t\tEnter 'C' for Audi Q7." << endl;
      cout << "\t\t\t\tEnter 'D' for MG Hector " << endl;
      cout << "\t\t\t\tEnter 'E' for Tata Safari"<<endl;
      cout << "\t\t\t\tEnter 'F' for Go Back"<<endl;
      cout << endl;
      cout << "\t\t\t\tChoose a Car from the above options: ";
      cin >> carmodel;
      cout << endl;
      cout << "--------------------------------------------------------------------------" << endl;
      if (carmodel == "A" || carmodel == "a")
      {
        system("CLS");

        cout << "You have choosed Mahindra XUV 700" << endl;
        ifstream inA("A.txt"); // displaying details of model A
        char str[200];
        z=60;
        while (inA)
        {
          inA.getline(str, 200);
          if (inA)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "B" || carmodel == "b")
      {
        system("CLS");

        cout << "You have choosed BMW X5" << endl;
        ifstream inB("B.txt"); // displaying details of model B
        char str[200];
        z=70;
        while (inB)
        {
          inB.getline(str, 200);
          if (inB)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "C" || carmodel == "c")
      {
        system("CLS");
        cout << "You have choosed Audi Q7" << endl;
        ifstream inC("C.txt"); // displaying details of model C
        char str[200];
        z=100;
        while (inC)
        {
          inC.getline(str, 200);
          if (inC)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "D" || carmodel == "d")
      {
        system("CLS");
        cout << "You have choosed MG Hector" << endl;
        ifstream inD("D.txt"); // displaying details of model C
        char str[200];
        z=120;
        while (inD)
        {
          inD.getline(str, 200);
          if (inD)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "E" || carmodel == "e")
      {
        system("CLS");
        cout << "You have choosed Tata Safari" << endl;
        ifstream inE("E.txt"); // displaying details of model C
        char str[200];
        z=150;
        while (inE)
        {
          inE.getline(str, 200);
          if (inE)
            cout << str << endl;
        }
        sleep(2);
      }
      if(carmodel == "F"|| carmodel=="f")
      {
        goto start;
      }
      if    (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "a" && carmodel != "b" && carmodel != "c" && carmodel != "D" && carmodel != "d" && carmodel != "E" && carmodel!="e")

        cout << "Invaild Car Model. Please try again!" << endl;
    } while (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "a" && carmodel != "b" && carmodel != "c" && carmodel != "D" && carmodel != "d" && carmodel != "E" && carmodel!="e");
      break;
      case 2:
      do
      {
      cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
      cout << "\t\t\t\tEnter 'A' for Ford mustang" << endl;
      cout << "\t\t\t\tEnter 'B' for Audi R8." << endl;
      cout << "\t\t\t\tEnter 'C' for Toyota Supra." << endl;
      cout << "\t\t\t\tEnter 'D' for BMW z4" << endl;
      cout << "\t\t\t\tEnter 'E' for Porsche 718"<<endl;
      cout << "\t\t\t\tEnter 'F' for Go Back"<<endl;
      cout << endl;
      cout << "\t\t\t\tChoose a Car from the above options: ";
      cin >> carmodel;
      cout << endl;
      cout << "--------------------------------------------------------------------------" << endl;
      if (carmodel == "A" || carmodel == "a")
      {
        system("CLS");

        cout << "You have choosed Ford mustang" << endl;
        ifstream inA("Aa.txt"); // displaying details of model A
        char str[200];
        z=120;
        while (inA)
        {
          inA.getline(str, 200);
          if (inA)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "B" || carmodel == "b")
      {
        system("CLS");

        cout << "You have choosed Audi R8" << endl;
        ifstream inB("Bb.txt"); // displaying details of model B
        char str[200];
        z=150;
        while (inB)
        {
          inB.getline(str, 200);
          if (inB)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "C" || carmodel == "c")
      {
        system("CLS");
        cout << "You have choosed Toyota Supra" << endl;
        ifstream inC("Cc.txt"); // displaying details of model C
        char str[200];
        z=170;
        while (inC)
        {
          inC.getline(str, 200);
          if (inC)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "D" || carmodel == "d")
      {
        system("CLS");
        cout << "You have choosed BMW Z4" << endl;
        ifstream inD("Dd.txt"); // displaying details of model C
        char str[200];
        z=180;
        while (inD)
        {
          inD.getline(str, 200);
          if (inD)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "E" || carmodel == "e")
      {
        system("CLS");
        cout << "You have choosed Porsche 718" << endl;
        ifstream inE("Ee.txt"); // displaying details of model C
        char str[200];
        z=200;
        while (inE)
        {
          inE.getline(str, 200);
          if (inE)
            cout << str << endl;
        }
        sleep(2);
      }
      if(carmodel=="F"||carmodel=="f")
      {
        goto start;
      }
      if    (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "a" && carmodel != "b" && carmodel != "c" && carmodel != "D" && carmodel != "d" && carmodel != "E" && carmodel!="e")

        cout << "Invaild Car Model. Please try again!" << endl;
    } while (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "a" && carmodel != "b" && carmodel != "c" && carmodel != "D" && carmodel != "d" && carmodel != "E" && carmodel!="e");
      break;
      case 3:
              do
      {
      cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
      cout << "\t\t\t\tEnter 'A' for Roll-Royce Phantom" << endl;
      cout << "\t\t\t\tEnter 'B' for Roll-Royce Ghost." << endl;
      cout << "\t\t\t\tEnter 'C' for Mercedes Maybach S-Class." << endl;
      cout << "\t\t\t\tEnter 'D' for Range Rover" << endl;
      cout << "\t\t\t\tEnter 'E' for Audi A8L"<<endl;
      cout << "\t\t\t\tEnter 'F' for Go Back"<<endl;
      cout << endl;
      cout << "\t\t\t\tChoose a Car from the above options: ";
      cin >> carmodel;
      cout << endl;
      cout << "------------------------------------------------------------------------------------------------------------" << endl;
      if (carmodel == "A" || carmodel == "a")
      {
        system("CLS");

        cout << "You have choosed Roll-Royce Phantom" << endl;
        ifstream inA("AAA.txt"); // displaying details of model A
        char str[200];
        z=300;
        while (inA)
        {
          inA.getline(str, 200);
          if (inA)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "B" || carmodel == "b")
      {
        system("CLS");

        cout << "You have choosed Roll-Royce Ghost" << endl;
        ifstream inB("BBB.txt"); // displaying details of model B
        char str[200];
        z=320;
        while (inB)
        {
          inB.getline(str, 200);
          if (inB)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "C" || carmodel == "c")
      {
        system("CLS");
        cout << "You have choosed Mercedes Maybach S-Class" << endl;
        ifstream inC("CCC.txt"); // displaying details of model C
        char str[200];
        z=280;
        while (inC)
        {
          inC.getline(str, 200);
          if (inC)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "D" || carmodel == "d")
      {
        system("CLS");
        cout << "You have choosed Range Rover" << endl;
        ifstream inD("DDD.txt"); // displaying details of model C
        char str[200];
        z=340;
        while (inD)
        {
          inD.getline(str, 200);
          if (inD)
            cout << str << endl;
        }
        sleep(2);
      }
      if (carmodel == "E" || carmodel == "e")
      {
        system("CLS");
        cout << "You have choosed Audi A8L" << endl;
        ifstream inE("EEE.txt"); // displaying details of model C
        char str[200];
        z=340;
        while (inE)
        {
          inE.getline(str, 200);
          if (inE)
            cout << str << endl;
        }
        sleep(2);
      }
      if(carmodel=="F"||carmodel=="f")
      {
        goto start;
      }
      if    (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "a" && carmodel != "b" && carmodel != "c" && carmodel != "D" && carmodel != "d" && carmodel != "E" && carmodel!="e")

        cout << "Invaild Car Model. Please try again!" << endl;
    } while (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "a" && carmodel != "b" && carmodel != "c" && carmodel != "D" && carmodel != "d" && carmodel != "E" && carmodel!="e");
      break;
      default: 
      cout<<"You Entered Wrong choice";
      goto start;
      break;
    }
    cout << "-------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Please provide following information: " << endl;
    // getting data from user related to rental service
    cout << "Please select a Car No. : ";
    cin >> carnumber;
    cout << "Number of days you wish to rent the car : ";
    cin >> days;
    cout << endl;
  }
  void calculate()
  {
    sleep(1);
    system("CLS");
    cout << "Calculating rent. Please wait......" << endl;
    sleep(2);
    if(o==1)
    {
    if (carmodel == "A" || carmodel == "a")
    {
      rentalfee = days * z;
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "XUV 700";
    }

    if (carmodel == "B" || carmodel == "b")
    {
      rentalfee = days * z;
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Audi Q7";
    }

    if (carmodel == "C" || carmodel == "c")
    {
      rentalfee = days * z;
      
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "BMW X5";
    }
    if (carmodel == "D" || carmodel == "d")
    {
      rentalfee = days * z;
      
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "MG Hector";
    }
    if (carmodel == "E" || carmodel == "e")
    {
      rentalfee = days * z;
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Tata Safari";
    }
    cout<<"Your Total Rent is: "<<total;
    }
    if(o==2)
    {
    if (carmodel == "A" || carmodel == "a")
    {
      rentalfee = days * z;
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Ford Mustang";
    } 

    if (carmodel == "B" || carmodel == "b")
    {
      rentalfee = days * z;
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Audi R8";
    }

    if (carmodel == "C" || carmodel == "c")
    {
      rentalfee = days * z;
      
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Toyota Supra";
    }
    if (carmodel == "D" || carmodel == "d")
    {
      rentalfee = days * z;
      
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "BMW Z4";
    }
    if (carmodel == "E" || carmodel == "e")
    {
      rentalfee = days * z;
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Porsche 718";
    }
    cout<<"Your Total Rent is: "<<total;
    }
    if(o==3)
    {
    if (carmodel == "A" || carmodel == "a")
    {
      rentalfee = days * z;
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Roll-Royce Phantom";
    }

    if (carmodel == "B" || carmodel == "b")
    {
      rentalfee = days * z;
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Roll-Royce Ghost";
    }

    if (carmodel == "C" || carmodel == "c")
    {
      rentalfee = days * z;
      
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Merceds Maybach S-Class";
    }
    if (carmodel == "D" || carmodel == "d")
    {
      rentalfee = days * z;
      
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "Range Rover";
    }
    if (carmodel == "E" || carmodel == "e")
    {
      rentalfee = days * z;
      gst = rentalfee * 18 / 100;
      total = gst + rentalfee;
      carmodel = "BMW ix";
    }
    cout<<"Your Total Rent is: "<<total;
    }
  }

  void payment()
  {
    cout<<endl<<"Please Pay Minimum 30%  of the total rent";
    n=total*30/100;
    cout<<endl<<"If you want to pay more than minimum rent then press Y otherwise press N:";
      abc:
    cin>>pay;
    if(pay=="Y"||pay=="y")
    {
      aga:
       cout<<"How much:";
       cin>>m;
       if(m>n)
       {
        total=total-m;
       }
       if(m<n)
       {
        cout<<"The amount you entered is less than 30% of total amount:"<<endl;
        cout<<"Please pay more than:"<<n<<endl;
        goto aga;
       }

    }
    if(pay=="N"||pay=="n")
    {
      cout<<"Pay this amount:"<<n;
      total=total-n;
      m=n;
         sleep(2);
    }
    if (pay!="Y"&&pay!="y"&&pay!="N"&&pay!="n")
    {
      cout<<"you entered wrong choice:";
      goto abc;
    }
  }
  void showrent()
  {
    
     system("CLS");
    cout << "Generating Invoce. Please wait......" << endl;
    cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
    cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
    cout << "\t\t	| Invoice No. :"<< "------------------|" << setw(10) << 189 << endl;
    cout << "\t\t	| Customer Name:"<< "-----------------|" << setw(10) << customerfirst << endl;
    cout << "\t\t\t| Customer Mobile Number:"<< "--------|" << setw(10) << customernumber << endl;
    cout << "\t\t	| Car Model :"<< "--------------------|" << setw(10) << carmodel << endl;
    cout << "\t\t	| Car No. :"<< "----------------------|" << setw(10) << carnumber << endl;
    cout << "\t\t	| Number of days :"<< "---------------|" << setw(10) << days << endl;
    cout << "\t\t\t|Your Rent for a single day is:"<< "--|" << setw(10) << z << endl;
    cout << "\t\t	| Your Rental Amount is :"<< "--------|" << setw(10) << rentalfee << endl;
    cout << "\t\t	| GST Amount is  :"<< "---------------|" << setw(10) << gst << endl;
    cout << "\t\t	| Advanced :"<< "---------------------|" << setw(10) <<m<< endl;
    cout << "\t\t	 ________________________________________________________" << endl;
    cout << "\n";
    cout << "\t\t	| Total Rental Amount is :"<< "-------|" << setw(10) << total << endl;
    cout << "\t\t	 ________________________________________________________" << endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not" << endl;
    cout << "\t\t	 require an authorised signture #" << endl;
    cout << " " << endl;
    cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
    cout << "\t\t	You are advised to pay up the amount before due date." << endl;
    cout << "\t\t	Otherwise penelty fee will be applied" << endl;
    cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
    sleep(5);
       int f;
    system("PAUSE");
    
    system ("CLS");
    
     ifstream inf("thanks.txt");

  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
  sleep(10);

  }
};
class welcome // welcome class
{
public:
  int welcum()
  {
    ifstream oo("welcome.txt"); // displaying welcome ASCII image text on output screen fn1353

    if (!oo)
    {
      cout << "Cannot open input file.\n";
    }
    char str[1000];
    while (oo)
    {
      oo.getline(str, 1000); // delim defaults to '\n' cp
      if (oo)
        cout << str << endl;
    }
    oo.close();
    sleep(1);
    cout << "\nStarting the program please wait....." << endl;
    sleep(1);
    cout << "\nloading up files....." << endl;
    sleep(1);      // function which waits for (n) seconds
    system("CLS"); // cleares screen
  }
};
int main()
{
  welcome obj1;  // object created for welcome class
  obj1.welcum(); // welcum function is called
  rent obj2;
  // object created for rent class and further member functions are called
  obj2.data();
  obj2.calculate();
  obj2.payment();
  obj2.showrent();
  return 0; // end of the program
}

int login()
{
  string pass = "";
  char ch;
  cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
  cout << "\t\t\t\t\t------------------------------";
  cout << "\n\t\t\t\t\t\t     LOGIN \n\n";
  cout << "\t\t\t\t\t------------------------------";
  cout << "\n\t\t\t\t\t\t   Mr. Om Bansal\n\n";
  cout << "\t\t\t\t\t------------------------------";
  cout << "\n\t\t\t\t\t   Please Enter Your  Password: ";
  ch = _getch();
  while (ch != 13)
  { // character 13 is enter
    pass.push_back(ch);
    cout << '*';
    ch = _getch();
  }
  if (pass == "2")
  {
    cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
    system("PAUSE");
    system("CLS");
  }
  else
  {
    cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
    system("PAUSE");
    system("CLS");
    login();
  }
}
