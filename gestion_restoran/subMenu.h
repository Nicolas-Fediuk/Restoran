#ifndef SUBMENU_H_INCLUDED
#define SUBMENU_H_INCLUDED
void menuCliente();
void munuPedido();
void carta();

void subMenu(){
    while(true){
    system("cls");
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    int opc;

    gotoxy(17,10); cout<<"MENU PRINCIPAL";
    gotoxy(17,12); cout<<"(1) CLIENTES";
    gotoxy(17,14); cout<<"(2) CARTA";
    gotoxy(17,16); cout<<"(3) PEDIDO";
    gotoxy(17,18); cout<<"(4) VOLVER";
    gotoxy(17,22); cout<<"INGRESE UNA OPCION: ";
    cin>>opc;
    switch(opc){
        case 1: menuCliente();
        break;
        case 2: carta();
        break;
        case 3:
        break;
        case 4:return;
                system("cls");
        break;
    }

    }

    system("pause>null");
}


#endif // SUBMENU_H_INCLUDED
