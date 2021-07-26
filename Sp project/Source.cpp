#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>


int found;
bool Booking = false;
using namespace std;
struct Field
{
	int ID;
	int Capacity;
	string audience;
	int price;

};
struct District
{
	string name;
	int number_of_fields;
	string isNatural;
	string coverance;
	string WorkingHours;
};
struct player {
	string username;
	string mobileNumber;
	string address;
};

//Declaring functions

void  Players_Entry();
void Searching_by_districts();
void Show_Districts();
void Show_NasrCity_Fields();
void Show_Zamalek_Fields();
void Show_Ainshams_Fields();
void Show_F1_NC();
void Show_F2_NC();
void Show_F3_NC();
void Show_F4_NC();
void Show_F1_Z();
void Show_F2_Z();
void Show_F3_Z();
void Show_F4_Z();
void Show_F1_AS();
void Show_F2_AS();
void Show_F3_AS();
void Show_F4_AS();
void Search_by_time();
void check_nasr_city(int s, int e);
void check_zamalek(int s, int e);
void check_ain_shams(int s, int e);
void Districts_booking();
void ain_shams_fields_booking();
void zamalek_fields_booking();
void nasr_city_fields_booking();
void F1NC_booking();
void F2NC_booking();
void F3NC_booking();
void F4NC_booking();
void F1Z_booking();
void F2Z_booking();
void F3Z_booking();
void F4Z_booking();
void F1AS_booking();
void F2AS_booking();
void F3AS_booking();
void F4AS_booking();
void MAIN_PROGRAM();



int main()
{
	
	MAIN_PROGRAM();


	return 0;
}


//Used in returning to the main menu throughout the program
void MAIN_PROGRAM()
{
	system("cls");
	cout << "1- Search by districts & Fields\n2- Search by time\n3- Booking\n";
	int detector;
	cin >> detector;
	system("cls");
	if (detector == 1)
	{
		Searching_by_districts();
	}
	else if (detector == 2)
	{
		Search_by_time();
	}
	else
	{
		Districts_booking();
	}
}

//Task 1
void Searching_by_districts()
{
	while (true){
		system("cls");
	Show_Districts();
	cout << "Please choose :\n1- Nasr City \n2- Zamalek  \n3- Ainshams\n\n";
	cout << "Please enter the district you want : ";
	int x;
	cin >> x;
	system("cls");

	if (x == 1)
	{
		Show_NasrCity_Fields();
		cout << "Please enter the number of field you want to check :";
		cin >> x;
		system("cls");
	
		if (x == 1)
			Show_F1_NC();

		else if (x == 2)
			Show_F2_NC();
		else if (x == 3)
			Show_F3_NC();
		else
			Show_F4_NC();
	}
	else if (x == 2)
	{
		Show_Zamalek_Fields();
		cout << "Please enter the number of field you want to check :";
		cin >> x;
		system("cls");
		//cout<<endl;
		if (x == 1)
			Show_F1_Z();

		else if (x == 2)
			Show_F2_Z();
		else if (x == 3)
			Show_F3_Z();
		else
			Show_F4_Z();
	}
	else
	{
		Show_Ainshams_Fields();
		cout << "Please enter the number of field you want to check :";
		cin >> x;
		system("cls");
		if (x == 1)
			Show_F1_AS();
		else if (x == 2)
			Show_F2_AS();
		else if (x == 3)
			Show_F3_AS();
		else
			Show_F4_AS();
	}

	if (Booking == false){
	char repeat;
	cout << "Do you want to check another field (y/n) :  \n";
	cin >> repeat;
	if (repeat == 'N' || repeat == 'n')
	{
		char Main_Menu;
		cout << "Do you want to go to the main menu (y/n) ?\n";
		cin >> Main_Menu;
		if (Main_Menu == 'y')
			MAIN_PROGRAM();
		else break;
	}
	else{ Searching_by_districts(); }
	
	}
	break;// Remember to edit this 
	}
	
}

//Showing all districts with their information
void Show_Districts()
{
	District District_DataBase;
	ifstream ReadDistrict("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\Districts.txt");

	while (ReadDistrict >> District_DataBase.name >> District_DataBase.number_of_fields >> District_DataBase.isNatural >> District_DataBase.coverance >> District_DataBase.WorkingHours)
	{
		cout << District_DataBase.name << ":" << endl << District_DataBase.number_of_fields << " Fields " << ", " << District_DataBase.isNatural << " Quitch " << ", " << District_DataBase.coverance << ", " << "Working hours : " << District_DataBase.WorkingHours << " " << endl << endl;
	}
};

//Showing each seperate field with its information
void Show_NasrCity_Fields()
{
	Field NasrCity;
	ifstream NasrCityFields("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\NasrCity.txt");
	while (NasrCityFields >> NasrCity.ID >> NasrCity.Capacity >> NasrCity.audience >> NasrCity.price)
	{
		cout << "Field number " << NasrCity.ID << endl;
		cout << "Capacity of " << NasrCity.Capacity << " Players" << endl;
		cout << NasrCity.audience << endl;
		cout << NasrCity.price << " $ / hour " << endl << endl;
	}
}
void Show_Zamalek_Fields()
{
	Field Zamalek;
	ifstream ZamalekFields("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\Zamalek.txt");
	while (ZamalekFields >> Zamalek.ID >> Zamalek.Capacity >> Zamalek.audience >> Zamalek.price)
	{
		cout << "Field number " << Zamalek.ID << endl;
		cout << "Capacity of " << Zamalek.Capacity << " Players" << endl;
		cout << Zamalek.audience << endl;
		cout << Zamalek.price << " $ / hour " << endl << endl;
	}
}
void Show_Ainshams_Fields()
{
	Field Ainshams;
	ifstream AinshamsFields("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\Ainshams.txt");
	while (AinshamsFields >> Ainshams.ID >> Ainshams.Capacity >> Ainshams.audience >> Ainshams.price)
	{
		cout << "Field number " << Ainshams.ID << endl;
		cout << "Capacity of " << Ainshams.Capacity << " Players" << endl;
		cout << Ainshams.audience << endl;
		cout << Ainshams.price << " $ / hour " << endl << endl;
	}
}

//Showing each seperate field with its available hours
void Show_F1_NC()
{
	cout << "Field 1 " << endl << endl;
	int Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f1_NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1NC.txt");
	while (f1_NC >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
			counter_choice++;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F1NC_booking();
			Booking = true;
			Players_Entry();
		}
			
	}

}
void Show_F2_NC()
{
	cout << "Field 2 " << endl << endl;
	int Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f2_NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2NC.txt");
	while (f2_NC >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F2NC_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F3_NC()
{
	cout << "Field 3" << endl << endl;
	int  Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f3_NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3NC.txt");
	while (f3_NC >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F3NC_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F4_NC()
{
	cout << "Field 4 " << endl << endl;
	int Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f4_NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4NC.txt");
	while (f4_NC >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F4NC_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F1_Z()
{
	cout << "Field 1 " << endl << endl;
	int Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f1_Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1Z.txt");
	while (f1_Z >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F1Z_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F2_Z()
{
	cout << "Field 2 " << endl << endl;
	int Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f2_Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2Z.txt");
	while (f2_Z >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F2Z_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F3_Z()
{
	cout << "Field 3 " << endl << endl;
	int Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f3_Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3Z.txt");
	while (f3_Z >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F3Z_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F4_Z()
{
	cout << "Field 4 " << endl << endl;
	int Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f4_Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4Z.txt");
	while (f4_Z >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F4Z_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F1_AS()
{
	cout << "Field 1 " << endl << endl;
	int  Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f1_AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1AS.txt");
	while (f1_AS >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F1AS_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F2_AS()
{
	cout << "Field 2 " << endl << endl;
	int Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f2_AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2AS.txt");
	while (f2_AS >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F2AS_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F3_AS()
{
	cout << "Field 3 " << endl << endl;
	int Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f3_AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3AS.txt");
	while (f3_AS >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F3AS_booking();
			Booking = true;
			Players_Entry();
		}
	}
}
void Show_F4_AS()
{
	cout << "Field 4 " << endl << endl;
	int  Available;
	int counter = 0;
	int counter_choice = 1;
	bool isAnyAvailable = false;
	ifstream f4_AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4AS.txt");
	while (f4_AS >> Available)
	{
		if (Available == 0)
		{
			isAnyAvailable = true;
			cout << "From " << counter << ":00  To " << counter + 1 << ":00" << endl << endl;
		}
		counter++;

	}
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	if (isAnyAvailable == false)cout << "There are no available time at this field we are sorry ! \n";
	else{
		char book;
		cout << "Do you want to book this field right now (y/n) ?\n";
		cin >> book;
		if (book == 'y')
		{
			F4AS_booking();
			Booking = true;
			Players_Entry();
		}
	}
	
}

//Task 2

//Main Displaying according to time function
 void Search_by_time()
{
	while (true){
	system("cls");
	found = 0;
	cout << "Please enter starting hour: ";
	int start;
	cin >> start;
	cout << "Please enter ending hour: ";
	int end;
	cin >> end;
	system("cls");
	check_nasr_city(start, end);
	check_zamalek(start, end);
	check_ain_shams(start, end);
	if (found == 0){
		cout << "sorry! there are no available fields at this time\n";
	}
		cout << "Do you want to search with another time?(y/n): ";
		char ch;
		cin >> ch;
		if (ch == 'n' || ch == 'N'){
			char Main_Menu;
			cout << "Do you want to go to the main menu?(y/n): ";
			cin >> Main_Menu;
			if (Main_Menu == 'y')
				MAIN_PROGRAM();
			else break;
		}

	}

}

//Checling every district at the choosen time
void check_nasr_city(int s, int e)
{
	District Nasr_City;
	ifstream NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\Nasr_city_District.txt");
	if (!NC.is_open()){
		exit(EXIT_FAILURE);
	}

	while (NC >> Nasr_City.name >> Nasr_City.number_of_fields >> Nasr_City.isNatural >> Nasr_City.coverance >> Nasr_City.WorkingHours);
	NC.close();

	Field nasr_city_field[4];

	ifstream NC_fields("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\NasrCity.txt");
	if (!NC_fields.is_open()){
		exit(EXIT_FAILURE);
	}
	int i = 0;
	while (NC_fields >> nasr_city_field[i].ID >> nasr_city_field[i].Capacity >> nasr_city_field[i].audience >> nasr_city_field[i].price)
	{
		i++;
	}
	NC_fields.close();

	bool taken_hour[4][24];
	bool temp;

	ifstream f1nc("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1NC.txt");
	if (!f1nc.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (f1nc >> temp){
		taken_hour[0][i] = temp;
		i++;
	}
	f1nc.close();

	ifstream f2nc("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2NC.txt");
	if (!f2nc.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (f2nc >> temp){
		taken_hour[1][i] = temp;
		i++;
	}
	f2nc.close();

	ifstream f3nc("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3NC.txt");
	if (!f3nc.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (f3nc >> temp){
		taken_hour[2][i] = temp;
		i++;
	}
	f3nc.close();

	ifstream f4nc("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4NC.txt");
	if (!f4nc.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (f4nc >> temp){
		taken_hour[3][i] = temp;
		i++;
	}
	f4nc.close();

	bool not_available[4] = { false, false, false, false };

	for (i = 0; i<4; i++){
		for (int j = s; j<e; j++){
			if (taken_hour[i][j] == true){
				not_available[i] = true;
			}
		}
	}
	i = 0;
	for (i = 0; i<4; i++){
		if (not_available[i] == false){
			found++;
			cout << "District: " << Nasr_City.name << endl
				<< "quitch type: " << Nasr_City.isNatural << endl
				<< Nasr_City.coverance << endl
				<< "Field ID: " << nasr_city_field[i].ID << endl
				<< "Capacity: " << nasr_city_field[i].Capacity << " players\n"
				<< nasr_city_field[i].audience << endl
				<< "Price: " << nasr_city_field[i].price << "$\n"
				<< "________________________________\n";
		}
	}
}
void check_zamalek(int s, int e)
{
	District zamalek;
	ifstream ZM("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\zamalek_distric.txt");
	if (!ZM.is_open()){
		exit(EXIT_FAILURE);
	}

	while (ZM >> zamalek.name >> zamalek.number_of_fields >> zamalek.isNatural >> zamalek.coverance >> zamalek.WorkingHours);
	ZM.close();

	Field zamalek_field[4];

	ifstream ZM_fields("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\Zamalek.txt");
	if (!ZM_fields.is_open()){
		exit(EXIT_FAILURE);
	}
	int i = 0;
	while (ZM_fields >> zamalek_field[i].ID >> zamalek_field[i].Capacity >> zamalek_field[i].audience >> zamalek_field[i].price)
	{
		i++;
	}
	ZM_fields.close();

	bool taken_hour[4][24];
	bool temp;

	ifstream F1Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1Z.txt");
	if (!F1Z.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (F1Z >> temp){
		taken_hour[0][i] = temp;
		i++;
	}
	F1Z.close();

	ifstream F2Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2Z.txt");
	if (!F2Z.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (F2Z >> temp){
		taken_hour[1][i] = temp;
		i++;
	}
	F2Z.close();

	ifstream F3Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3Z.txt");
	if (!F3Z.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (F3Z >> temp){
		taken_hour[2][i] = temp;
		i++;
	}
	F3Z.close();

	ifstream F4Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4Z.txt");
	if (!F4Z.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (F4Z >> temp){
		taken_hour[3][i] = temp;
		i++;
	}
	F4Z.close();

	bool not_available[4] = { false, false, false, false };

	for (i = 0; i<4; i++){
		for (int j = s; j<e; j++){
			if (taken_hour[i][j] == true){
				not_available[i] = true;
			}
		}
	}
	i = 0;
	for (i = 0; i<4; i++){
		if (not_available[i] == false){
			found++;
			cout << "District: " << zamalek.name << endl
				<< "quitch type: " << zamalek.isNatural << endl
				<< zamalek.coverance << endl
				<< "Field ID: " << zamalek_field[i].ID << endl
				<< "Capacity: " << zamalek_field[i].Capacity << " players\n"
				<< zamalek_field[i].audience << endl
				<< "Price: " << zamalek_field[i].price << "$\n"
				<< "________________________________\n";
		}
	}
}
void check_ain_shams(int s, int e)
{
	District ain_shams;
	ifstream AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\ain_shams_district.txt");
	if (!AS.is_open()){
		exit(EXIT_FAILURE);
	}

	while (AS >> ain_shams.name >> ain_shams.number_of_fields >> ain_shams.isNatural >> ain_shams.coverance >> ain_shams.WorkingHours);
	AS.close();

	Field ain_shams_field[4];

	ifstream AS_fields("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\Ainshams.txt");
	if (!AS_fields.is_open()){
		exit(EXIT_FAILURE);
	}
	int i = 0;
	while (AS_fields >> ain_shams_field[i].ID >> ain_shams_field[i].Capacity >> ain_shams_field[i].audience >> ain_shams_field[i].price)
	{
		i++;
	}
	AS_fields.close();

	bool taken_hour[4][24];
	bool temp;

	ifstream f1as("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1AS.txt");
	if (!f1as.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (f1as >> temp){
		taken_hour[0][i] = temp;
		i++;
	}
	f1as.close();

	ifstream f2as("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2AS.txt");
	if (!f2as.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (f2as >> temp){
		taken_hour[1][i] = temp;
		i++;
	}
	f2as.close();

	ifstream f3as("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3AS.txt");
	if (!f3as.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (f3as >> temp){
		taken_hour[2][i] = temp;
		i++;
	}
	f3as.close();

	ifstream f4as("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4AS.txt");
	if (!f4as.is_open()){
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (f4as >> temp){
		taken_hour[3][i] = temp;
		i++;
	}
	f4as.close();

	bool not_available[4] = { false, false, false, false };

	for (i = 0; i<4; i++){
		for (int j = s; j<e; j++){
			if (taken_hour[i][j] == true){
				not_available[i] = true;
			}
		}
	}
	i = 0;
	for (i = 0; i<4; i++){
		if (not_available[i] == false){
			found++;
			cout << "District: " << ain_shams.name << endl
				<< "quitch type: " << ain_shams.isNatural << endl
				<< ain_shams.coverance << endl
				<< "Field ID: " << ain_shams_field[i].ID << endl
				<< "Capacity: " << ain_shams_field[i].Capacity << " players\n"
				<< ain_shams_field[i].audience << endl
				<< "Price: " << ain_shams_field[i].price << "$\n"
				<< "________________________________\n";
		}
	}
}

//Task 3

//Main Booking Function
void Districts_booking()
{
	District District_DataBase;
	int choice;
	cout << "1- Nasr City\n2- Zamalek\n3- Ainshams\n\nPlease choose the district of reservation :" << endl;
	cin >> choice;
	if (choice == 1)
	{

		nasr_city_fields_booking();

	}
	else if (choice == 2)
	{
		zamalek_fields_booking();

	}
	else
	{

		ain_shams_fields_booking();

	}
	Players_Entry();

}

//Booking Function for each seperate district
void nasr_city_fields_booking() //showing fields of nasr city
{
	system("cls");
	cout << "Field 1\nField 2\nField 3\nField 4\n\n";
	cout << "Please choose the field : ";
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		F1NC_booking();
	}
	else if (choice == 2)
	{
		F2NC_booking();
	}
	else if (choice == 3)
	{
		F3NC_booking();
	}
	else if (choice == 4)
	{
		F4NC_booking();
	}
}
void zamalek_fields_booking()//showing fields of zamalek city
{
	system("cls");
	cout << "Field 1\nField 2\nField 3\nField 4\n\n";
	cout << "Please choose the field : ";
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		F1Z_booking();
	}
	else if (choice == 2)
	{
		F2Z_booking();

	}
	else if (choice == 3)

	{
		F3Z_booking();

	}
	else if (choice == 4)
	{
		F4Z_booking();
	}

}
void ain_shams_fields_booking()//showing fields of ainshams city
{
	system("cls");
	cout << "Field 1\nField 2\nField 3\nField 4\n\n";
	cout << "Please choose the field : ";
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		F1AS_booking();

	}
	else if (choice == 2)
	{
		F2AS_booking();


	}


	else if (choice == 3)
	{
		F3AS_booking();

	}
	else if (choice == 4)
	{
		F4AS_booking();

	}
}

//Booking Function for each seperate field
void F1NC_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";
	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f1_NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1NC.txt");
	for (int i = 0; i <24; i++)
	{


		while (f1_NC >> Available[i])
		{
			if (Available[i] == 0)
			{

				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false)
	
	{
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if(isAnyAvailable == true)
	{
		int  F1NC_available[24];
		int x, i = 0;
		ifstream Reading_F1NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1NC.txt");
		while (Reading_F1NC >> x)
		{

			F1NC_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
			cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F1NC_available[R] = 1;
			ofstream Writing_F1NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1NC.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F1NC << F1NC_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;
		}
		else
		{
			cout << "Do you want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
	
		}
	}
}
void F2NC_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";
	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f2_NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2NC.txt");
	for (int i = 0; i<24; i++)
	{

		while (f2_NC >> Available[i])
		{
			if (Available[i] == 0)
			{

				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}


	if (isAnyAvailable == true)
	{
		int  F2NC_available[24];
		int x, i = 0;
		ifstream Reading_F2NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2NC.txt");
		while (Reading_F2NC >> x)
		{

			F2NC_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F2NC_available[R] = 1;
			ofstream Writing_F2NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2NC.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F2NC << F2NC_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;
		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}
void F3NC_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";
	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f3_NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3NC.txt");
	for (int i = 0; i <24; i++)
	{


		while (f3_NC >> Available[i])
		{
			if (Available[i] == 0)
			{

				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if (isAnyAvailable == true)
	{
		int  F3NC_available[24];
		int x, i = 0;
		ifstream Reading_F3NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3NC.txt");
		while (Reading_F3NC >> x)
		{

			F3NC_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F3NC_available[R] = 1;
			ofstream Writing_F3NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3NC.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F3NC << F3NC_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;
		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}
void F4NC_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";
	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f4_NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4NC.txt");
	for (int i = 0; i<24; i++)
	{
		while (f4_NC >> Available[i])
		{
			if (Available[i] == 0)
			{

				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if (isAnyAvailable == true)
	{
		int  F4NC_available[24];
		int x, i = 0;
		ifstream Reading_F4NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4NC.txt");
		while (Reading_F4NC >> x)
		{

			F4NC_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F4NC_available[R] = 1;
			ofstream Writing_F4NC("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4NC.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F4NC << F4NC_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;
		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}
void F1Z_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";

	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f1_Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1Z.txt");
	for (int i = 0; i<24; i++)
	{

		while (f1_Z >> Available[i])
		{
			if (Available[i] == 0)
			{
				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if (isAnyAvailable == true)
	{
		int  F1Z_available[24];
		int x, i = 0;
		ifstream Reading_F1Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1Z.txt");
		while (Reading_F1Z >> x)
		{

			F1Z_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F1Z_available[R] = 1;
			ofstream Writing_F1Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1Z.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F1Z << F1Z_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;

		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}
void F2Z_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";

	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f2_Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2Z.txt");
	for (int i = 0; i<24; i++)
	{

		while (f2_Z >> Available[i])
		{
			if (Available[i] == 0)
			{
				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if (isAnyAvailable == true)
	{
		int  F2Z_available[24];
		int x, i = 0;
		ifstream Reading_F2Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2Z.txt");
		while (Reading_F2Z >> x)
		{

			F2Z_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F2Z_available[R] = 1;
			ofstream Writing_F2Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2Z.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F2Z << F2Z_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;
		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}
void F3Z_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";

	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f3_Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3Z.txt");
	for (int i = 0; i <24; i++)
	{

		while (f3_Z >> Available[i])
		{
			if (Available[i] == 0)
			{
				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if (isAnyAvailable == true)
	{
		int  F3Z_available[24];
		int x, i = 0;
		ifstream Reading_F3Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3Z.txt");
		while (Reading_F3Z >> x)
		{

			F3Z_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F3Z_available[R] = 1;
			ofstream Writing_F3Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3Z.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F3Z << F3Z_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;
		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}
void F4Z_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";

	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f4_Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4Z.txt");
	for (int i = 0; i<24; i++)
	{

		while (f4_Z >> Available[i])
		{
			if (Available[i] == 0)
			{
				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if (isAnyAvailable == true)
	{
		int  F4Z_available[24];
		int x, i = 0;
		ifstream Reading_F4Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4Z.txt");
		while (Reading_F4Z >> x)
		{

			F4Z_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F4Z_available[R] = 1;
			ofstream Writing_F4Z("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4Z.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F4Z << F4Z_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;
		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}
void F1AS_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";

	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f1_AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1AS.txt");
	for (int i = 0; i<24; i++)
	{

		while (f1_AS >> Available[i])

		{
			if (Available[i] == 0)
			{
				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;
		}
	}

	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if (isAnyAvailable == true){
		int  F1AS_available[24];
		int x, i = 0;
		ifstream Reading_F1AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1AS.txt");
		while (Reading_F1AS >> x)
		{

			F1AS_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F1AS_available[R] = 1;
			ofstream Writing_F1AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F1AS.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F1AS << F1AS_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;
		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}
void F2AS_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";

	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f2_AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2AS.txt");
	for (int i = 0; i<24; i++)
	{
		while (f2_AS >> Available[i])
		{
			if (Available[i] == 0)
			{
				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if (isAnyAvailable == true)
	{
		int  F2AS_available[24];
		int x, i = 0;
		ifstream Reading_F2AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2AS.txt");
		while (Reading_F2AS >> x)
		{

			F2AS_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F2AS_available[R] = 1;
			ofstream Writing_F2AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F2AS.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F2AS << F2AS_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;
		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}
void F3AS_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";

	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f3_AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3AS.txt");
	for (int i = 0; i < 24; i++)
	{

		while (f3_AS >> Available[i])
		{
			if (Available[i] == 0)
			{
				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
		int  F3AS_available[24];
		int x, i = 0;
		ifstream Reading_F3AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3AS.txt");
		while (Reading_F3AS >> x)
			{

				F3AS_available[i] = x;

				i++;
			}
			int R;
			cout << "Please enter the hour of reservation :";
			cin >> R;
			char Booking_confirmation;
			cout << "Do you want to confirm the reservation ?(y/n) :";
			cin >> Booking_confirmation;
			if (Booking_confirmation == 'y'){
				F3AS_available[R] = 1;
				ofstream Writing_F3AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F3AS.txt");

				{
					for (int i = 0; i < 24; i++)
					{
						Writing_F3AS << F3AS_available[i] << endl;

					}
				}
				cout << "Successful Reservation" << endl;
			}
			else
			{
				cout << "Do uou want to go to the main menu (y/n)? : ";
				char Main;
				cin >> Main;
				if (Main == 'y')
					MAIN_PROGRAM();
				else {
					cout << "\n\nThankyou for using the application \n\n";
					exit(0);
				}
			}
		}
void F4AS_booking(){
	system("cls");
	cout << "Avaialable hours \n\n";

	bool Available[24];
	int counter = 0;
	bool isAnyAvailable = false;
	ifstream f4_AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4AS.txt");
	for (int i = 0; i<24; i++)
	{


		while (f4_AS >> Available[i])
		{
			if (Available[i] == 0)
			{
				isAnyAvailable = true;
				cout << "From " << counter << ":00  To " << counter + 1 << ":00" << "\t---->" << counter << endl << endl;
			}
			counter++;

		}
	}
	if (isAnyAvailable == false){
		cout << "There are no available time at this field we are sorry ! \n";
		cout << "Do uou want to go to the main menu (y/n)? : ";
		char Main;
		cin >> Main;
		if (Main == 'y')
			MAIN_PROGRAM();
	}
	if (isAnyAvailable == true){
		int  F4AS_available[24];
		int x, i = 0;
		ifstream Reading_F4AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4AS.txt");
		while (Reading_F4AS >> x)
		{

			F4AS_available[i] = x;

			i++;
		}
		int R;
		cout << "Please enter the hour of reservation :";
		cin >> R;
		char Booking_confirmation;
		cout << "Do you want to confirm the reservation ?(y/n) :";
		cin >> Booking_confirmation;
		if (Booking_confirmation == 'y'){
			F4AS_available[R] = 1;
			ofstream Writing_F4AS("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\F4AS.txt");

			{
				for (int i = 0; i < 24; i++)
				{
					Writing_F4AS << F4AS_available[i] << endl;

				}
			}
			cout << "Successful Reservation" << endl;

		}
		else
		{
			cout << "Do uou want to go to the main menu (y/n)? : ";
			char Main;
			cin >> Main;
			if (Main == 'y')
				MAIN_PROGRAM();
			else {
				cout << "\n\nThankyou for using the application \n\n";
				exit(0);
			}
		}
	}
}

//To take players data as an input from the user
void Players_Entry(){

	ofstream UserData("C:\\Users\\Asser Ayman\\Desktop\\Sp project\\UserData.txt");
	if (UserData.is_open()){
		int numberOfPlayers;
		cout << "Please enter the number of players you want to save their information : ";
		cin >> numberOfPlayers;
			system("cls");
		cin.ignore(); // To ignore the '\n' character
		player info_players[22];
		for (int i = 0; i<numberOfPlayers; i++)
		{

			cout << "Please enter the user name for Player " << i + 1 << " : ";
			getline(cin, info_players[i].username);

			cout << "Please enter the mobile number for Player " << i + 1 << " : ";
			getline(cin, info_players[i].mobileNumber);

			cout << "Please enter the address  for Player " << i + 1 << " : ";
			getline(cin, info_players[i].address);


			UserData << "Player " << i + 1 << ' ' << info_players[i].username << ' ' << info_players[i].mobileNumber << ' ' << info_players[i].address << endl;
		}
		cout << endl;
		cout << "Data Confirmed !" << endl;
		char Return_MAIN;
		cout << "Do you want to return to the main  menu ? (y/n):";
		cin >> Return_MAIN;
		if (Return_MAIN == 'y')
			MAIN_PROGRAM();
		else
		{
			cout << "\n\n\Thankyou for using the application \n\n";
		}

	}
	else{
		cout << "The Program is not linked with the text file \n";
	}
	UserData.close();
};
