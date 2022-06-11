#include <string.h>
#include <stdio.h>
#include <vector>
#include <map>
#include <iostream>
#include <iterator>


using namespace std;

void pause(){
    system("pause");
}

void clear(){
    system("cls");
    return;
}

void logo(){
    cout << "ssssss  ii    aaaa    kk  kk    aaaa    ddddd" << endl;
    cout << "ss  ss  ii    aaaa    kk kk     aaaa    dd  dd" << endl;
    cout << " ss     ii   aa  aa   kkkk     aa  aa   dd   dd" << endl;
    cout << "  ss    ii   aaaaaa   kkk      aaaaaa   dd   dd" << endl;
    cout << "   ss   ii  aa    aa  kkkk    aa    aa  dd   dd" << endl;
    cout << "ss  ss  ii  aa    aa  kk kk   aa    aa  dd  dd" << endl;
    cout << "ssssss  ii  aa    aa  kk  kk  aa    aa  ddddd" << endl;
    return;
}

double grade(int b){
    double k;
    if(b >= 86){
        k = 4;
    } else if(b> 75 && b < 86){
        k = 3.5;
    } else if(b > 65 && b < 76){
        k = 3.2;
    } else if(b > 60 && b < 66){
        k = 3;
    } else if(b > 55 & b < 61){
        k = 2.7;
    } else if(b > 40 && b < 56){
        k = 2.4;
    } else if(b < 41){
        k = 2;
    } 
    return k;
}

class user_data{
    public:
        string name;
        string dob;
        string logid;
        string pass;
        string gender;
        
        void changepass(){
            string bro;
            cout << "Input new password: ";
            cin >> bro;
            pass = bro;
            cout << "Password successfuly changed!\n New password: " << pass << endl;
            pause();
            return;
        }
};

class mahasiswa : public user_data {
    public: 

        string NRP;
        string major;

        mahasiswa(){};

        mahasiswa(string a, string c, string d, string e, string f, string g, string h){
            NRP = a;
            major = c;
            name = d;
            dob = e;
            logid = f;
            pass = g;
            gender = h;
        }

        void print(){
            cout << "Data Mahasiswa" << endl << endl;
            cout << "Nama          : " << name << endl;
            cout << "Date of birth : " << dob << endl;
            cout << "Gender        : " << gender << endl;
            cout << "NRP           : " << NRP << endl;
            cout << "Major         : " << major << endl;
            cout << "logid         : " << logid << endl;
            cout << "pass          : " << pass << endl;
            return;
        }

        void input(){
            string name_a;
            string dob_a;
            string logid_a;
            string pass_a;
            string gender_a;
            string NRP_a;
            string major_a;
            cin.ignore();
            cout << "Name           : ";
            getline(cin, name_a);
            cout << "Date of birth  : ";
            getline(cin, dob_a);
            cout << "Create Login ID: ";
            cin >> logid_a;
            cout << "Create password: ";
            cin >> pass_a;
            cout << "Gender         : ";
            cin >> gender_a;
            cout << "NRP            : ";
            cin >> NRP_a;
            cin.ignore();
            cout << "Major          : ";
            getline(cin, major_a);
            name = name_a;
            dob = dob_a;
            logid = logid_a;
            pass = pass_a;
            gender = gender_a;
            NRP = NRP_a;
            major = major_a;
            return;
        }

};

class tendik : public user_data {
    public: 

        string profession;
        string ID;
        int year_of_entry;
        string education;
        int jml_kelas;

        tendik(){};

        tendik(string a, int b, string c, string d, string e, string f, string g, string h, string i){
            ID = a;
            year_of_entry = b;
            education = c;
            name = d;
            dob = e;
            logid = f;
            pass = g;
            gender = h;
            profession = i;
        }

        void print(){
            cout << "Data Tenaga Kependidikan" << endl << endl;
            cout << "Nama          : " << name << endl;
            cout << "Date of birth : " << dob << endl;
            cout << "Gender        : " << gender << endl;
            cout << "ID            : " << ID << endl;
            cout << "Year of entry : " << year_of_entry << endl;
            cout << "Education     : " << education << endl;
            cout << "logid         : " << logid << endl;
            cout << "pass          : " << pass << endl;
            return;
        }

        void input(){
    
            string name_a;
            string dob_a;
            string logid_a;
            string pass_a;
            string gender_a;
            string ID_a;
            double year_of_entry_a;
            string education_a;
            string profession_a;

            cin.ignore();
            cout << "Name           : ";
            getline(cin, name_a);
            cout << "Date of birth  : ";
            getline(cin, dob_a);
            cout << "Create Login ID: ";
            cin >> logid_a;
            cout << "Create password: ";
            cin >> pass_a;
            cout << "Gender         : ";
            cin >> gender_a;
            cout << "ID             : ";
            cin >> ID_a;
            cout << "Year of entry  : ";
            cin >> year_of_entry_a;
            cin.ignore();
            cout << "Education      : ";
            getline(cin, education_a);
            cout << "Profession     : ";
            cin >> profession_a;

            name = name_a;
            dob = dob_a;
            logid = logid_a;
            pass = pass_a;
            gender = gender_a;
            ID = ID_a;
            year_of_entry = year_of_entry_a;
            education = education_a;
            profession = profession_a;
            
            return;
        }

};

class croom{
    public:
        int jumlah_mhs = 0;
        tendik dosen;
        string subjek;
        map<string,mahasiswa> Mhs;
        map<string,int> nilai;
        //string: NRP

        croom(){}
        
        croom(tendik a, string b){
            dosen = a;
            subjek = b; 
        }

        int getgradebynrp(string k){
            if(Mhs[k].name==""){
                return 0;
            }
            return nilai[k];
        }

        void showgradebynrp(string k){
            if(Mhs[k].name==""){
                return;
            }
            cout << endl;
            cout << "Class " << subjek << endl;
            cout << "Name  : " << Mhs[k].name << endl;
            cout << "NRP   : " << Mhs[k].NRP << endl;
            cout << "Grade : " << nilai[k] << endl;
            return;
        }

        void input_mhs(mahasiswa a){
            Mhs[a.NRP] = a;
            nilai[a.NRP] = 0;
            jumlah_mhs++;
            return;
        }

        void get_mhs(){
            map<string,mahasiswa>::iterator it;
            map<string,int>::iterator ti;

            cout << "Jumlah mahasiswa   : " << jumlah_mhs << endl;
            int k = 1;
            for(it = Mhs.begin(), ti = nilai.begin(); it != Mhs.end() && k <= jumlah_mhs; ti++, it++, k++){
                cout << k << ". " << it->second.NRP << "   " << ti->second << "  \t" << it->second.name << endl;
            }
            cout << endl;
            return;
        }

        void input_nilaiauto(string k, int bro){ //string = NRP
            int be = 0;
            nilai[k] = bro;
            return;
        }

        void input_nilamanual(){
            int n;
            string b;
            get_mhs();
            cout << "NRP nilai yang di input: ";
            cin >> b;
            cout << "Jumlah nilai: ";
            cin >> n;
            ;
            nilai[b] = n;
            cout << "Input successful!\nName: " << Mhs[b].name << "\nGrade: " << nilai[b] << endl;
            return;
        }

        void getinfo(){
            cout << "Kelas              : " << subjek << endl;
            cout << "Dosen              : " << dosen.name << endl;
            return;
        }

};

void main_menu(){
    map<string,mahasiswa> dataMhs; // string : Loginid
    map<string,tendik> dataTendik; // string : Loginid
    map<string,croom> datpermit;// permission utk join classroom, (logid mhs, class)
    vector<croom> datacroom;
    int bro,k=0, bob; // pilihan main menu
    string gol, pas; // id login
    bool bri = true, bru; //bri untuk perulangan menu saja. bru utk tendik/mhs

    //WARNING THESE DECLARATIONS ARE FOR EXAMPLES ONLY
    dataTendik["bruno12"] = tendik("123456", 2016, "Ph.D", "Bruno Tyson", "29 Februari 1995", "bruno12", "bruno12", "male", "Teacher");
    dataTendik["bubo"] = tendik("123457", 2016, "Ph.D", "Tyson Iron", "27 Mei 1997", "bubo", "bubo123", "male", "Teacher");
    //ID, year_of_entry, education, name, dob, logid, pass, gender,profession

    dataMhs["handika"] = mahasiswa("5024211029", "Teknik Komputer", "Setya Handika", "28 November 2002", "handika", "handika", "male");
    dataMhs["leo123"] = mahasiswa("5024211030", "Teknik Perkapalan", "Leo Kumara", "17 Agustus 1945", "leo123", "leo123", "male");
    dataMhs["ardian"] = mahasiswa("5024211031", "Farmasi", "Ardian Kumparan", "15 Januari 2001", "ardian", "ardian", "male");
    dataMhs["aldrin"] = mahasiswa("5024211032", "Teknologi Informasi", "Benjamin Aldrin", "29 Februari 2001", "aldrin", "aldrin", "male");
    //NRP, IP, major, name, dob, logid, pass, gender
    
    //kelas 1
    croom lol(dataTendik["bruno12"],"Fisika");
    lol.input_mhs(dataMhs["handika"]);
    lol.input_mhs(dataMhs["leo123"]);
    lol.input_mhs(dataMhs["aldrin"]);
    lol.input_nilaiauto("5024211029",50);
    lol.input_nilaiauto("5024211030",100);
    lol.input_nilaiauto("5024211032",90);
    datacroom.push_back(lol);

    //kelas 2
    croom lel(dataTendik["bubo"],"Kimia");
    lel.input_mhs(dataMhs["handika"]);
    lel.input_mhs(dataMhs["ardian"]);
    lel.input_nilaiauto("5024211029",75);
    lel.input_nilaiauto("5024211031",80);
    datacroom.push_back(lel);

    //request
    datpermit[dataMhs["aldrin"].logid] = datacroom[1];

    blok:
    clear();
    logo();
    cout << "\n\n";
    cout << "Menu:\n 1. Login\n 2. Create new user\n 3. exit\n input: ";
    cin >> bob;
    if(bob==2){
        int klamo;
        cout << "Masukan 1 apabila mahasiswa dan 2 apabila tenaga pendidikan.\n input: ";
        cin >> klamo;

        if(klamo == 1){
            mahasiswa kek;
            kek.input();
            cout << endl;
            kek.print();
            pause();
            dataMhs.insert(std::make_pair(kek.logid,kek));

        } else {
            tendik kuk;
            kuk.input();
            cout << endl;
            kuk.print();
            pause();
            dataTendik.insert(std::make_pair(kuk.logid,kuk));

        }
        cout << "Successfully created new user! Please login at the main menu.\n";
        pause();
        goto blok;
    } else if(bob == 3){
        cout << "Exit successful!" << endl;
        return;

    } else if(bob != 1){
        cout << "Invalid input! Please try again!\n";
        pause();
        goto blok;
    }
    cout << "ID       : ";
    cin >> gol;
    cout << "Password : ";
    cin >> pas;
    if(pas == dataMhs[gol].pass){
        cout << "login successful!\n";
        bru = true; //mhs
    } else if(pas == dataTendik[gol].pass){
        cout << "login successful!\n";
        bru = false;//tendik
    } else if(k<3){
        cout << "incorrect ID / password. Please try again!\n";
        k++;
        pause();
        goto blok;
    } else {
        cout << "You failed to login 3x. Please try again later.\n";
        pause();
        exit(1);
    }

    exfile:
    clear();
    logo();
    cout << endl;
    if(bru){
        cout << "Welcome to SIM Akademik!\n\n Main menu:\n 1. Create new user \n 2. User information\n 3. Change user password\n 4. Classroom\n 5. logout\n 6. exit\n\nInput:  ";
    } else {
        cout << "Welcome to SIM Akademik!\n\n Main menu:\n 1. Create new user \n 2. User information\n 3. Change user password\n 4. Classroom\n 5. logout\n 6. exit\n\nInput:  ";
    }

    cin >> bro;
    cin.ignore();
    switch(bro)
    {
        case 1:
        {
            int klamo;
            cout << "Masukan 1 apabila mahasiswa dan 2 apabila tenaga pendidikan.\n input: ";
            cin >> klamo;

            if(klamo == 1){
                mahasiswa kek;
                kek.input();
                cout << endl;
                kek.print();
                pause();
                dataMhs.insert(std::make_pair(kek.logid,kek));

            } else {
                tendik kuk;
                kuk.input();
                cout << endl;
                kuk.print();
                pause();
                dataTendik.insert(std::make_pair(kuk.logid,kuk));

            }
            cout << "Successfully created new user!\n";
            pause();
            break;
        }
        case 2:
        {
            if(bru){
                dataMhs[gol].print();
            } else {
                dataTendik[gol].print();
            }
            pause();
            break;

        }
        case 3:
        {
            if (bru){
                dataMhs[gol].changepass();
            } else {
                dataTendik[gol].changepass();
            }
            break;

        }
        case 4:
        {
            glok:
            int klok; //indeks pd case4
            clear();
            logo();
            cout << "\nWelcome to the classroom menu!\n\nOption: \n";
            //mahasiswa menu: tampilkan kelas, gabung kelas,
            //tendik menu: tampilkan kelas, buat kelas, ubah kelas
            if(bru){
                cout << " 1. Show classes\n 2. Join a class (requires permission)\n 3. Show my grades\n 4. Back\n Option: ";
            } else {
                cout << " 1. Show classes\n 2. Create a new class\n 3. Input grades\n 4. Class admission request\n 5. Back\n Option: ";
            }
            cin >> klok;
            if (klok == 1){
                clear();
                logo();
                cout << endl;
                vector<croom>::iterator it;
                int b = 0;
                it = datacroom.begin();
                while(it!=datacroom.end()){
                    cout << "Class number " << b+1 << endl;
                    it->getinfo();
                    it->get_mhs();
                    b++;
                    it++;
                }
            } else if(klok == 2 && bru){// pilihan 2 sebagai mahasiswa
                clear();
                logo();
                cout << endl;
                vector<croom>::iterator it;
                int bro = 0, in, b = 0;
                it = datacroom.begin();
                while(it!=datacroom.end()){
                    map<string,mahasiswa>::iterator w;
                    for(w = it->Mhs.begin(); w != it->Mhs.end(); w++){
                        if(dataMhs[gol].NRP == w->first){
                            goto kek;
                        }
                    }
                    cout << "Class number " << b+1 << endl;
                    it->getinfo();
                    it->get_mhs();
                    bro++;
                    kek:
                    b++;
                    it++;
                }
                if(bro == 0){
                    cout << "\nYou are already a student of all available class!\n" << endl;

                } else {
                    cout << "Which class do you want to join? Please input the class number: ";
                    cin >> in;
                    datpermit[gol] = datacroom[in-1];
                    clear();
                    logo();
                    cout << "\nRequest to join class sent!\nPlease wait until confirmation!\n Class info:\n Class number " << in << endl;
                    datacroom[in-1].getinfo();
                    datacroom[in-1].get_mhs(); 
                    cout << endl;
                }
                    

            } else if(klok == 2 && !bru){// pilihan 2 sebagai tendik
                string subj;
                cout << "Please input class's subject: ";
                cin >> subj;
                croom blob(dataTendik[gol],subj);
                datacroom.push_back(blob);
                cout << "Success!\n Class info:\n";
                blob.getinfo();
                blob.get_mhs();

            } else if(klok == 3 && bru){//pilihan 3 mahasiswa
                clear();
                logo();
                cout << endl;
                int ind = 0;
                double ip = 0;
                int jmlip = 0;
                vector<croom>::iterator klok = datacroom.begin();
                while(klok!=datacroom.end()){
                    klok->showgradebynrp(dataMhs[gol].NRP);
                    int b = datacroom[ind].getgradebynrp(dataMhs[gol].NRP);
                    if(b!=0){
                        ip += grade(b);
                        jmlip++;
                    }
                    ind++;
                    klok++;
                }
                cout <<"\n IP: " << ip/jmlip << endl << endl;

            } else if(klok == 3 && !bru){//pilihan 3 tendik 
                int x, b = 0;
                clear();
                logo();
                vector<croom>::iterator it;
                for(it = datacroom.begin(); it != datacroom.end(); it++, b++){
                    if(it->dosen.ID != dataTendik[gol].ID){
                        continue;
                    }
                    cout << "\nClass number " << b+1 << endl;
                    it->getinfo();
                    it->get_mhs();
                }
                cout << "Which class number? \n Option: ";
                cin >> x;
                datacroom[x-1].input_nilamanual();


            } else if(klok == 4 && bru){
                goto exfile;

            } else if(klok == 4 && !bru){//tendik permission
                clear();
                map<string,croom>::iterator it;
                int ok, ko = 0;
                for(it = datpermit.begin(); it != datpermit.end(); it++){
                    if(it->second.dosen.ID==dataTendik[gol].ID){
                        cout << "Request number    : " << ko+1 << endl;
                        cout << " Student name     : " << dataMhs[it->first].name << endl;
                        cout << " Student name     : " << dataMhs[it->first].NRP << endl;
                        cout << " Class subject    : " << it->second.subjek << endl;
                        cout << endl;
                        ko++;
                    }
                }
                if(ko==0){
                    clear();
                    logo();
                    cout << endl;
                    cout << "There are no request made." << endl;
                    pause();
                    goto exfile;
                }
                cout << " Request number to confirm : ";
                cin >> ok;
                it = datpermit.begin();
                for(int j = 0; j != ok-1 && it != datpermit.end() ; it++){
                    if(it->second.dosen.ID==dataTendik[gol].ID){
                        j++;
                    }
                }
                clear();
                logo();
                vector<croom>::iterator lo;
                for(lo = datacroom.begin(); lo->subjek != it->second.subjek; lo++){};
                lo->input_mhs(dataMhs[it->first]);
                datpermit.erase(it->first);
                cout << "Student permitted!" << endl;
                cout << "Class info: " << endl;
                lo->getinfo();
                lo->get_mhs();

            } else if(klok == 5 && !bru){
                goto exfile;

            } else {
                cout << "Invalid input! Please try again! " << endl;
                pause();
                goto glok;
            }
            pause();
            break;
        }
        case 5:
        {
            int ram;
            cout << "Do you want to log out of your account?\n input 0 to go back and 1 to log out.\n input: ";
            cin >> ram;
            if(ram==1){

                cout << "logout successful!\n";
                pause();
                goto blok;
            } else if(ram==0){
                goto exfile;
            }
            pause();
            break;

        }
        case 6:
        {
            return;
        }
        default:
        {
            cout << "incorrect input, Please try again!\n";
            pause();
            break;
        }
        
        

    }
    if(bri){
        goto exfile;
    }
    return;
}

int main()
{
    main_menu();
	return 0;
}