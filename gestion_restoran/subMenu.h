#ifndef SUBMENU_H_INCLUDED
#define SUBMENU_H_INCLUDED
void menuCliente();
void munuPedido();

void subMenu(){
    system("cls");
    while(true){
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    int opc;

    gotoxy(17,10); cout<<"MENU PRINCIPAL";
    gotoxy(17,12); cout<<"(1) CLIENTES";
    gotoxy(17,14); cout<<"(2) PEDIDOS";
    gotoxy(17,16); cout<<"(3) VOLVER";
    gotoxy(17,20); cout<<"INGRESE UNA OPCION: ";
    cin>>opc;
    switch(opc){
        case 1: menuCliente();
        break;
        /*case 2: munuPedido();
        break;*/
        case 3:return;
                system("cls");
        break;
    }

    }

    system("pause>null");
}


#endif // SUBMENU_H_INCLUDED
