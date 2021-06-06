#ifndef ARCHIVOCLIENTE_H_INCLUDED
#define ARCHIVOCLIENTE_H_INCLUDED


bool registarCliente(){
    system("cls");
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"REGISTRO DE CLIENTE"<<endl;
    Cliente reg;
    reg.cargar();
    bool grabo=reg.grabarEnDisco();
    return grabo;
}



/*eliminarCliente();*/



bool buscarCliente(int dni){
    Cliente reg;
    int pos=0;
    while(reg.leerEnDisco(pos++)){
        if(dni==reg.getDni()){
            return true;
        }
        else{
            return false;
        }
    }
}

bool consultaCliente(){
    Cliente reg;
    bool verificar=false;
    int pos=0,dni;
    system("cls");
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"CONSULTA DE CLIENTE"<<endl;
    gotoxy(17,10);cout<<"INGRESE EL DNI DEL CLIENTE: ";cin>>dni;
    while(reg.leerEnDisco(pos++)){
        if(verificar=buscarCliente(dni)){
            if(verificar==true && dni==reg.getDni()){
                reg.mostrar();
                return true;
            }
        }
    }
}


#endif // ARCHIVOCLIENTE_H_INCLUDED
