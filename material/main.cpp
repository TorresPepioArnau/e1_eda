#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include "Mobilitat.h"

using namespace std;


void menu (Mobilitat &mob, int opcio){
    //pre: mob existeix i opcio es valida
    //post: es desplega el menu i es realitzen les instruccions instroduides amb opcio

    switch(opcio){

        case 00:

        break;

        case 01:
            string path;
            cin >> path;
            cout << setfill('*') <<setw(20)<< endl;
            cout << "* 01: Llegir dades *" << endl;
            cout << setfill('*') <<setw(20)<< endl;
            cout << "Numero de linies: " << mob.llegirDades(path) << endl;
            break;

        case 02:
            int opcio_dist;
            cout << setfill('*') <<setw(25)<< endl;
            cout << "* 02: Nombre transports *" << endl;
            cout << setfill('*') <<setw(25)<< endl;
            cin>> opcio_dist;
                switch(opcio_dist){
                     case 1:
                        cout << "Distància Menys de 500 metres ==> "<< mob.nombreTransports(opcio_dist) << endl; //mostrar el vector de transports,
                        cout << setfill('*') <<setw(25)<< endl;
                     break;

                     case 2:
                        cout << "Distància De 500 a 2.000 metres ==> "<< mob.nombreTransports(opcio_dist) << endl; //mostrar el vector de transports,
                        cout << setfill('*') <<setw(25)<< endl;
                     break;

                     case 3:
                        cout << "Distància De 2.000 a 5.000 metres ==> "<< mob.nombreTransports(opcio_dist)  << endl; //mostrar el vector de transports,
                        cout << setfill('*') <<setw(25)<< endl;
                     break;

                     case 4:
                        cout << "Distància De 5.000 a 10.000 metres ==> "<< mob.nombreTransports(opcio_dist)  << endl; //mostrar el vector de transports,
                        cout << setfill('*') <<setw(25)<< endl;
                     break;

                     case 5:
                        cout << "Distància De 10.000 a 50.000 metres ==> "<< mob.nombreTransports(opcio_dist) << endl; //mostrar el vector de transports,
                        cout << setfill('*') <<setw(25)<< endl;
                     break;

                     case 6:
                        cout << "Distància De 50.000 a 100.000 metres ==> "<< mob.nombreTransports(opcio_dist) << endl; //mostrar el vector de transports,
                        cout << setfill('*') <<setw(25)<< endl;
                     break;

                     case 7:
                        cout << "Distància Més de 100.000 metres ==> "<< mob.nombreTransports(opcio_dist) << endl; //mostrar el vector de transports,
                        cout << setfill('*') <<setw(25)<< endl;
                     break;

                     default:
                         cerr << "error en el switch de distancia";
                     break;

                }
            break;

        case 03:
            int opcio_dist_2;
            cout << setfill('*') <<setw(37)<< endl;
            cout << "* 03: Nombre persones per transport *" << endl;
            cout << setfill('*') <<setw(37)<< endl;
            cin>> opcio_dist_2;

                switch(opcio_dist_2){
                     case 1:
                        cout << "Distància Menys de 500 metres "<< endl; //mostrar el vector de transports,
                        vector <pair <string, int>> v_1;
                        v_1 = mob.nombrePersonesPerTransport(opcio_dist_2);
                        int j_1 = 0;
                        for (auto i:v_1){
                            cout << j_1 << " : " <<i.first << " => " << i.second<< endl;
                            j_1++;
                        }
                     break;

                     case 2:
                        cout << "Distància De 500 a 2.000 metres "<< endl; //mostrar el vector de transports,
                        vector <pair <string, int>> v_2;
                        v_2 = mob.nombrePersonesPerTransport(opcio_dist_2);
                        int j_2 = 0;
                        for (auto i:v_2){
                            cout << j_2 << " : " <<i.first << " => " << i.second<< endl;
                            j_2++;
                        }
                     break;

                     case 3:
                        cout << "Distància De 2.000 a 5.000 metres "<< endl; //mostrar el vector de transports,
                        vector <pair <string, int>> v_3;
                        v_3 = mob.nombrePersonesPerTransport(opcio_dist_2);
                        int j_3 = 0;
                        for (auto i:v_3){
                            cout << j_3 << " : " <<i.first << " => " << i.second<< endl;
                            j_3++;
                        }
                     break;

                     case 4:
                        cout << "Distància De 5.000 a 10.000 metres "<< endl; //mostrar el vector de transports,
                        vector <pair <string, int>> v_4;
                        v_4 = mob.nombrePersonesPerTransport(opcio_dist_2);
                        int j_4 = 0;
                        for (auto i:v_4){
                            cout << j_4 << " : " <<i.first << " => " << i.second<< endl;
                            j_4++;
                        }
                     break;

                     case 5:
                        cout << "Distància De 10.000 a 50.000 metres "<< endl; //mostrar el vector de transports,
                        vector <pair <string, int>> v_5;
                        v_5 = mob.nombrePersonesPerTransport(opcio_dist_2);
                        int j_5 = 0;
                        for (auto i:v_5){
                            cout << j_5 << " : " <<i.first << " => " << i.second<< endl;
                            j_5++;
                        }
                     break;

                     case 6:
                        cout << "Distància De 50.000 a 100.000 metres "<< endl; //mostrar el vector de transports,
                        vector <pair <string, int>> v_6;
                        v_6 = mob.nombrePersonesPerTransport(opcio_dist_2);
                        int j_6 = 0;
                        for (auto i:v_6){
                            cout << j_6 << " : " <<i.first << " => " << i.second<< endl;
                            j_6++;
                        }
                     break;

                     case 7:
                        cout << "Distància Més de 100.000 metres "<< endl; //mostrar el vector de transports,
                        vector <pair <string, int>> v_7;
                        v_7 = mob.nombrePersonesPerTransport(opcio_dist_2);
                        int j_7 = 0;
                        for (auto i:v_7){
                            cout << j_7 << " : " <<i.first << " => " << i.second<< endl;
                            j_7++;
                        }
                     break;

                     default:
                         cerr << "error en el switch de distancia"<<endl;
                     break;
                }
            break;

        case 04:
            vector <pair <string, double>> v_8;
            cout << setfill('*') <<setw(20)<< endl;
            cout << "* 04: Més ràpid *" << endl;
            cout << setfill('*') <<setw(20)<< endl;
             v_8 = mob.mesRapid();

            cout<<"Menys de 500 metres : "<<v_8.at(0).first<<" => " <<v_8.at(0).second<<endl;
            cout<<"De 500 a 2.000 metres : "<<v_8.at(1).first <<" => "<<v_8.at(1).second<<endl;
            cout<<"De 2.000 a 5.000 metres : "<<v_8.at(2).first <<" => "<<v_8.at(2).second<<endl;
            cout<<"De 5.000 a 10.000 metres : "<<v_8.at(3).first <<" => "<<v_8.at(3).second<<endl;
            cout<<"De 10.000 a 50.000 metres : "<<v_8.at(4).first <<" =>"<<v_8.at(4).second<<endl;
            cout<<"De 50.000 a 100.000 metres : "<<v_8.at(5).first <<" => "<<v_8.at(5).second<<endl;
            cout<<"Més de 100.000 metres : "<<v_8.at(6).first <<" => "<<v_8.at(6).second<<endl;
            break;

       default:
            cout << "*  Opcio invalida  *" << endl;
            cout << "********************" << endl;
        break;

        }
    }

int main (){

    Mobilitat mob;
    int opcio;
    cin>> opcio;

    while (opcio !=00){
        menu(mob, opcio);
        cin>> opcio;
    }
return 0;
}
