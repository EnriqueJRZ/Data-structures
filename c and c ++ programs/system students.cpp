#include<iostream>
#include<fstream>
#include<iomanip>
//JUAREZ RAMIREZ LUIS ENRIQUE 1AV1 FUNDAMENTOS DE PROGRAMACION
//ESCOM IPN
using namespace std;
struct student
{
	int boleta;     //Boleta
	char nombre[50]; //Nombre
	char grupo[50]; //Nombre
    public:
	void getdata();		
	void showdata() const;	
	void show_tabular() const;
	int getIDNum() const;
}; 

struct materia
{   
    int boleta;
	int id_materia;
	char nombreM[50];
    char profesor[50];
    float cal1,cal2,cal3,calf;
    public:
	void getdataM();		
	void showdataM() const;	
	void show_tabularM() const;
	int getIDNumM() const;
	
};
  
void student::getdata()
{
	cout<<"\nIngresa la boleta del alumno ";
	cin>>boleta;
	cout<<"\n\nNombre del alumno: ";
	cin.ignore();
	cin.getline(nombre,50);
    cout<<"\n\nGrupo : ";
	cin.ignore();
	cin.getline(grupo,50);
}

void materia::getdataM()
{
	
    cout<<"\nIngresa el id del alumno que cursa la materia";
	cin>>boleta;
    cout<<"\nIngresa el id de la materia";
	cin>>id_materia;
  	cout<<"\n\nNombre de la materia: ";
	cin.ignore();
	cin.getline(nombreM,50);
	cout<<"\n\nNombre del profesor: ";
	cin.ignore();
	cin.getline(profesor,50);
    cout<<"\ncalificacion primer parcial ";
	cin>>cal1;
	cout<<"\ncalificacion segundo parcial ";
	cin>>cal2;
	cout<<"\ncalificacion tercer parcial ";
	cin>>cal3;
	 calf=(cal1+cal2+cal3)/3;
	 
	}
 
void student::showdata() const
{
	cout<<"\nBoleta: "<<boleta;
	cout<<"\nNombre: "<<nombre;
	cout<<"\nGrupo: "<<grupo;
}

void materia::showdataM() const
{
		cout<<"\nboleta: "<<boleta;
	cout<<"\nId materia: "<<id_materia;
	cout<<"\nNombre Materia: "<<nombreM;
	cout<<"\nProfesor: "<<profesor;
	cout<<"\nCalificacion1: "<<cal1;
	cout<<"\nCalificacion2: "<<cal2;
    cout<<"\nCalificacion3: "<<cal3;
    
   
}
 
void student::show_tabular() const
{
	cout<<boleta<<setw(6)<<" "<<nombre<<setw(10)<<grupo<<setw(4)<<endl;
}
void materia::show_tabularM() const
{
		cout<<boleta<<setw(6)<<" "<<cout<<id_materia<<setw(6)<<" "<<nombreM<<setw(10)<<profesor<<setw(4)<<cal1<<setw(4)<<cal2<<setw(4)
		<<cal3<<setw(4)<<endl;
}
 
 int  student::getIDNum() const
{
	return boleta;
}
 
 
 
int  materia::getIDNumM() const
{
	return id_materia;
}
 
 
 
void SaveStudent();	
void displayAll();	
void Searchdisplay(int);	
void modifyStudent(int);	
void deleteStudent(int);	
void DisplayClassResult();	
void DisplayResult();			
	
 
void write_student()
{
	student st;
	ofstream outFile;
	outFile.open("student.dat",ios::binary|ios::app);
	st.getdata();
	outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
	outFile.close();
    	cout<<"\n\nSE HA CREADO EL REGISTRO ";
	cin.ignore();
	cin.get();
}

void write_materia()
{
	materia st;
	ofstream outFile;
	outFile.open("materia.dat",ios::binary|ios::app);
	st.getdataM();
	outFile.write(reinterpret_cast<char *> (&st), sizeof(materia));
	outFile.close();
    	cout<<"\n\nSE HA CREADO EL REGISTRO ";
	cin.ignore();
	cin.get();
}
 
 
 
void display_all()
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"EL FILE NO EXISTE,PRESIONE CUALQUIER TECLA";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tMOSTRANDO TODOS LOS REGISTROS !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.showdata();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}
 
 void display_allM()
{
materia st;
	ifstream inFile;
	inFile.open("materia.dat",ios::binary);
	if(!inFile)
	{
		cout<<"EL FILE NO SE ENCONTRO,PRESIONE CUALQUIER TECLA";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tMOSTRANDO TODOS LOS REGISTROS !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(materia)))
	{
		st.showdataM();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}
 
 
void display_sp(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"NO EXISTE EL FILE,PRESIONE CUALQUIER TECLA";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.getIDNum()==n)
		{
	  		 st.showdata();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nEL REGISTRO NO EXISTE";
	cin.ignore();
	cin.get();
}
 
 
 void BuscarM(int n)
{
	materia st;
	ifstream inFile;
	inFile.open("materia.dat",ios::binary);
	if(!inFile)
	{
		cout<<"NO EXISTE EL FILE,PRESIONE CUALQUIER TECLA";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(materia)))
	{
		if(st.getIDNumM()==n)
		{
	  		 st.showdataM();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nEL REGISTRO NO EXISTE";
	cin.ignore();
	cin.get();
}
 
 
void modify_student(int n)
{
	bool found=false;
	student st;
	fstream File;
	File.open("student.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"EL FILE NO EXISTE!! ¡PRESIONE CUALQUIER LETRA...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{
 
		File.read(reinterpret_cast<char *> (&st), sizeof(student));
		if(st.getIDNum()==n)
		{
			st.showdata();
			cout<<"\n\nPORFAVOR INGRESE LOS NUEVOS DETALLES DEL ESTUDIANTE"<<endl;
			st.getdata();
		    	int pos=(-1)*static_cast<int>(sizeof(st));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&st), sizeof(student));
		    	cout<<"\n\n\t ACTUALIZADO";
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n REGISTRO NO ENCONTRADO ";
	cin.ignore();
	cin.get();
}
 
 
 
void delete_student(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"EL FILE NO SE ENCONTRO!! PRESIONA CUALQUIER TECLA...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.getIDNum()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	cout<<"\n\n\tREGISTRO ELIMINADO ..";
	cin.ignore();
	cin.get();
}

void delete_materia(int n)
{
	materia st;
	ifstream inFile;
	inFile.open("materia.dat",ios::binary);
	if(!inFile)
	{
		cout<<"El File no se pudo abrir!! Presiona cualquier letra...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Tempm.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(materia)))
	{
		if(st.getIDNumM()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&st), sizeof(materia));
		}
	}
	outFile.close();
	inFile.close();
	remove("materia.dat");
	rename("Temp.dat","materia.dat");
	cout<<"\n\n\tREGISTRO BORRADO ..";
	cin.ignore();
	cin.get();
}
 
int main()
{
	char ch;
	int num;
	int z;
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(2); 
	do
	{
	system("cls");
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\n\t1.Agregar alumno ";
	cout<<"\n\n\t2.Mostrar todos los alumnos ";
	cout<<"\n\n\t3.Buscar un Alumno ";
	cout<<"\n\n\t4.Modificar a un alumno";
	cout<<"\n\n\t5.Eliminar a algun alumno";
	cout<<"\n\n\t6. Mostrar todas Materias";
	cout<<"\n\n\t7. Agregar materias ";
	cout<<"\n\n\t8.Buscar Materia ";
	cout<<"\n\n\t9. Eliminar Materias";
	cout<<"\n\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\n\tPorfavor ingresa la opcion de tu eleccion (1-7): ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1':	write_student(); 
	         
	 
	break;
	case '2':	display_all(); 
	           
	break;
	case '3':	cout<<"\n\n\tPorfavor ingresa la boleta del estudiante: \n"; cin>>num;
				display_sp(num); break;
	case '4':	cout<<"\n\n\tPorfavor ingresa la boleta del estudiante: \n"; cin>>num;
			modify_student(num);break;
	case '5':	cout<<"\n\n\tPorfavor ingresa la boleta del estudiante: \n"; cin>>num;
			delete_student(num);break;
	case '6' :
	 display_allM();
	 break;
	case '9' :
	 	cout<<"\n\n\tPorfavor el id de la materia: \n"; cin>>z;
			delete_materia(z);
	 break;
	case '7' :	
	     write_materia();
	 break;
	 	case '8' :	cout<<"\n\n\tPorfavor el id de la materia: \n"; cin>>z;
		    BuscarM(z); break;

		
    }
	}while(ch!='9');
 
	return 0;
}
