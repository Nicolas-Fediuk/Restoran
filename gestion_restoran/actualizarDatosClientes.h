#ifndef ACTUALIZARDATOSCLIENTES_H_INCLUDED
#define ACTUALIZARDATOSCLIENTES_H_INCLUDED
int buscarDni(int dni){
    Cliente reg;
    int pos=0,pos2=0;
    while(reg.leerEnDisco(pos2++)){
        if(dni==reg.getDni()){
         return pos;
        }
        pos++;
    }
}

Cliente leerRegistro(int pos){
    Cliente reg;
    FILE *p;
    p=fopen("cliente.dat", "rb");

    /*if(p==NULL){return -1;}*/
    fseek(p, pos*sizeof reg, 0);
    fread(&reg,sizeof reg,1,p);
    fclose(p);
    return reg;
}

bool modificarEnDisco(Cliente reg, int pos){
    FILE *p;

    p=fopen("cliente.dat", "rb+");

    if(p==NULL){return false;}

    fseek(p,pos*sizeof reg, 0); ///ubicamos el puntero en la posición del archivo
    bool escribio=fwrite(&reg, sizeof reg, 1, p);///sobreescribimos el registro modificado
    fclose(p);
    return escribio;
}

bool actualizarNombre(int dni){
    system("cls");
    Cliente reg;
    char nombre[20];
    bool modifico;
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"ACTUALIZAR DATOS"<<endl;

    gotoxy(17,10); cout<<"1. INGRESE EL NUEVO NOMBRE: ";
    cin>>nombre;

    int pos=buscarDni(dni);

    reg=leerRegistro(pos);

    reg.setNombre(nombre);

    modifico=modificarEnDisco(reg, pos);

    return modifico;

    system("pause>null");
    system("cls");
}

bool actualizarApellido(int dni){
    system("cls");
    Cliente reg;
    char apellido[20];
    bool modifico;
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"ACTUALIZAR DATOS"<<endl;

    gotoxy(17,10); cout<<"1. INGRESE EL NUEVO APELLIDO: ";
    cin>>apellido;

    int pos=buscarDni(dni);

    reg=leerRegistro(pos);

    reg.setApellido(apellido);

    modifico=modificarEnDisco(reg, pos);

    return modifico;

    system("pause>null");
    system("cls");
}

bool actualizarCiudad(int dni){
    system("cls");
    Cliente reg;
    char ciudad[20];
    bool modifico;
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"ACTUALIZAR DATOS"<<endl;

    gotoxy(17,10); cout<<"1. INGRESE LA NUEVA CIUDAD: ";
    cin>>ciudad;

    int pos=buscarDni(dni);

    reg=leerRegistro(pos);

    reg.setCiudad(ciudad);

    modifico=modificarEnDisco(reg, pos);

    return modifico;

    system("pause>null");
    system("cls");
}

bool actualizarTelfono(int dni){
    system("cls");
    Cliente reg;
    int tel;
    bool modifico;
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"ACTUALIZAR DATOS"<<endl;

    gotoxy(17,10); cout<<"1. INGRESE EL NUEVO TELEFONO: ";
    cin>>tel;

    int pos=buscarDni(dni);

    reg=leerRegistro(pos);

    reg.setTelefono(tel);

    modifico=modificarEnDisco(reg, pos);

    return modifico;

    system("pause>null");
    system("cls");
}

bool actualizarDni(int dni){
    system("cls");
    Cliente reg;
    int Dni;
    bool modifico;
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"ACTUALIZAR DATOS"<<endl;

    gotoxy(17,10); cout<<"1. INGRESE EL NUEVO DNI: ";
    cin>>Dni;

    int pos=buscarDni(dni);

    reg=leerRegistro(pos);

    reg.setDni(Dni);

    modifico=modificarEnDisco(reg, pos);

    return modifico;

    system("pause>null");
    system("cls");
}





#endif // ACTUALIZARDATOSCLIENTES_H_INCLUDED
