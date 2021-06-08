#ifndef CLASECARTA_H_INCLUDED
#define CLASECARTA_H_INCLUDED
class Menu{
private:
    char nombre[40];
    float precio;
    int id;
public:
    void setNombre(const char *v){strcpy(nombre,v);}
    void setPrecio(float x){precio=x;}
    void setId(int x){id=x;}

    const char *getNombre(){return nombre;}
    float getPrecio(){return precio;}
    int getId(){return id;}

    bool grabarEnDisco();
    bool leerEnDisco(int pos);
    void cargar();
    void mostrar();
};

bool Menu::grabarEnDisco(){
    FILE *p;
    bool escribio;
	p=fopen("menu.dat","ab");
	if(p==NULL)return false;
	escribio=fwrite(this, sizeof(Menu), 1, p);
	fclose(p);
	return escribio;
}

bool Menu::leerEnDisco(int pos){
    FILE *p;
    p=fopen("menu.dat", "rb");
    if(p==NULL){return false;}
    fseek(p, pos*sizeof(Menu), 0);
    bool leyo=fread(this,sizeof(Menu),1,p);
    fclose(p);
    return leyo;
}

void Menu::cargar(){
    gotoxy(17,10);cout<<"ID DEL PLATO: ";
    cin>>id;
    gotoxy(17,12);cout<<"NOMBRE DEL PLATO: ";
    cin>>nombre;
    gotoxy(17,14);cout<<"PRECIO: ";
    cin>>precio;
}

void Menu::mostrar(){
    gotoxy(17,12);cout<<"ID: "<<id;
    gotoxy(17,14);cout<<"PLATO: "<<nombre;
    gotoxy(17,16);cout<<"PRECIO: "<<precio;
}
bool agregarPlato();
bool consultaPlato();

void carta(){
    system("cls");
    int opc;
    while(true){
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";

    gotoxy(17,8); cout<<"1. AGREGAR PLATO";
    gotoxy(17,10); cout<<"2. VER PLATO POR ID";
    gotoxy(17,12); cout<<"3. ACTUALIZAR PLATO";
    gotoxy(17,14); cout<<"4. ELIMINAR PLATO";
    gotoxy(17,16); cout<<"5. VOLVER";
    gotoxy(17,18); cout<<"INGRESE UNA OPCION: ";
    cin>>opc;
    switch(opc){
        case 1:
        if(agregarPlato()==false){
                gotoxy(17,25);cout<<"ERROR AL CARGAR EL PLATO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                else{
                gotoxy(17,25);cout<<"PLATO CARGADO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                system("pause>null");
                system("cls");


            break;
            case 2: if(consultaPlato()==false){
                gotoxy(17,25);cout<<"EL ID DEL PLATO NO EXISTE...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                else{
                 gotoxy(17,25);   cout<<"OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                system("pause>null");
                system("cls");
            break;
           /*case 3: actualizarPlato();



                system("pause>null");
                system("cls");

            break;*/
       /* case 4: eliminarPlato();
            break;*/

        case 5:return;
                system("cls");
            break;
    }
    }



}



#endif // CLASECARTA_H_INCLUDED
