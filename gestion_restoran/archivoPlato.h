#ifndef ARCHIVOPLATO_H_INCLUDED
#define ARCHIVOPLATO_H_INCLUDED

bool agregarPlato(){
    system("cls");
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"REGISTRO DE PLATO"<<endl;
    Menu reg;
    reg.cargar();
    bool grabo=reg.grabarEnDisco();
    return grabo;
}

bool buscarPlato(int id){
    Menu reg;
    int pos=0;
    while(reg.leerEnDisco(pos++)){
        if(id==reg.getId()){
            return true;
        }
        else{
            return false;
        }
    }
}

bool consultaPlato(){
    Menu reg;
    bool verificar=false;
    int pos=0,id;
    system("cls");
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"CONSULTA DE PLATO"<<endl;
    gotoxy(17,10);cout<<"INGRESE EL ID DEL PLATO: ";
    cin>>id;
    while(reg.leerEnDisco(pos++)){
        if(verificar=buscarPlato(id)){
            if(verificar==true && id==reg.getId()){
                reg.mostrar();
                return true;
            }
        }
    }
}

#endif // ARCHIVOPLATO_H_INCLUDED
