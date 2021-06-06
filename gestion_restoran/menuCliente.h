#ifndef MENUCLIENTE_H_INCLUDED
#define MENUCLIENTE_H_INCLUDED
class Cliente{
private:
    char nombre[20];
    char apellido[20];
    int dni;
    int telefono;
    char ciudad[20];
public:
    void setNombre(const char *v){strcpy(nombre,v);}
    void setApellido(const char *v){strcpy(apellido,v);}
    void setDni(int x){dni=x;}
    void setTelefono(int x){telefono=x;}
    void setCiudad(const char *v){strcpy(ciudad,v);}

    const char *getNombre(){return nombre;}
    const char *getApellido(){return apellido;}
    int getDni(){return dni;}
    int getTelefono(){return telefono;}
    const char *getCiudad(){return ciudad;}

    bool grabarEnDisco();
    bool leerEnDisco(int pos);
    void cargar();
    void mostrar();
};

bool Cliente::grabarEnDisco(){
    FILE *p;
    bool escribio;
	p=fopen("cliente.dat","ab");
	if(p==NULL)return false;
	escribio=fwrite(this, sizeof(Cliente), 1, p);
	fclose(p);
	return escribio;
}

bool Cliente::leerEnDisco(int pos){
    FILE *p;
    p=fopen("cliente.dat", "rb");

    if(p==NULL){return false;}
    fseek(p, pos*sizeof(Cliente), 0);
    bool leyo=fread(this,sizeof(Cliente),1,p);
    fclose(p);
    return leyo;
}
void Cliente::cargar(){
    gotoxy(17,10);cout<<"NOMBRE: ";
    cin>>nombre;
    gotoxy(17,12);cout<<"APELLIDO: ";
    cin>>apellido;
    gotoxy(17,14);cout<<"DNI: ";
    cin>>dni;
    gotoxy(17,16);cout<<"TELEFONO: ";
    cin>>telefono;
    gotoxy(17,18);cout<<"CIUDAD: ";
    cin>>ciudad;
}
void Cliente::mostrar(){
    gotoxy(17,12);cout<<"NOMBRE: "<<nombre<<endl;
    gotoxy(17,14);cout<<"APELLIDO: "<<apellido<<endl;
    gotoxy(17,16);cout<<"DNI: "<<dni<<endl;
    gotoxy(17,18);cout<<"TELEFONO: "<<telefono<<endl;
    gotoxy(17,20);cout<<"CIUDAD: "<<ciudad<<endl;
}

bool registarCliente();
bool consultaCliente();
void actualizarCliente();

void menuCliente(){
    system("cls");
    int opc;
    while(true){
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";

    gotoxy(17,8); cout<<"1. REGISTRAR";
    gotoxy(17,10); cout<<"2. ACTUALIZAR";
    gotoxy(17,12); cout<<"3. ELIMINAR";
    gotoxy(17,14); cout<<"4. CONSULTAR";
    gotoxy(17,16); cout<<"5. VOLVER";
    gotoxy(17,20); cout<<"INGRESE UNA OPCION: ";
    cin>>opc;
    switch(opc){
        case 1:
        if(registarCliente()==false){
                gotoxy(17,25);cout<<"ERROR AL CARGAR EL CLIENTE...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                else{
                gotoxy(17,25);cout<<"CLIENTE CARGADO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                system("pause>null");
                system("cls");


            break;
       case 2: actualizarCliente();
                 /*gotoxy(17,25);cout<<"EL DNI NO EXISTE...OPRIMA CUALQUIER LETRAR PARA VOLVER";*/


                system("pause>null");
                system("cls");

            break;
       /* case 3: eliminarCliente();
            break;*/
        case 4: if(consultaCliente()==false){
                gotoxy(17,25);cout<<"EL DNI DEL CLIENTE NO EXISTE...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                else{
                 gotoxy(17,25);   cout<<"OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                system("pause>null");
                system("cls");
            break;
        case 5:return;
                system("cls");
            break;
    }
    }

}


#endif // MENUCLIENTE_H_INCLUDED
