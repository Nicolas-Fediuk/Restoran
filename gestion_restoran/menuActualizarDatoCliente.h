#ifndef MENUACTUALIZARDATOCLIENTE_H_INCLUDED
#define MENUACTUALIZARDATOCLIENTE_H_INCLUDED
void menuActualizar(int dni);

void actualizarCliente(){
    system("cls");
   Cliente reg;
    int pos=0,dni;
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"ACTUALIZAR DATOS"<<endl;
    gotoxy(17,10);cout<<"INGRESE EL DNI DEL CLIENTE: ";
    cin>>dni;
    while(reg.leerEnDisco(pos++)){
        if(dni==reg.getDni()){
            gotoxy(17,25);cout<<"CLIENTE ENCONTRADO...OPRIMA CUALQUIER LETRAR PARA CONTINUAR";
            system("pause>null");
            system("cls");
            menuActualizar(dni);
        }
        else{
            gotoxy(17,25);cout<<"EL DNI NO EXISTE...OPRIMA CUALQUIER LETRAR PARA VOLVER";
            return;
        }
    }

}
void menuActualizar(int dni){
    system("cls");
    int opc;
    while(true){
    tituloAnimado();
    gotoxy(17,6); cout<<"CLIENTES";
    gotoxy(58,6); cout<<"PEDIDOS";
    gotoxy(108,6); cout<<"CERRAR";
    cout<<endl;
    gotoxy(17,8); cout<<"ACTUALIZAR DATOS"<<endl;

    gotoxy(17,10); cout<<"1. NOMBRE";
    gotoxy(17,12); cout<<"2. APELLIDO";
    gotoxy(17,14); cout<<"3. DNI";
    gotoxy(17,16); cout<<"4. TELEFONO";
    gotoxy(17,18); cout<<"5. CIUDAD";
    gotoxy(17,20); cout<<"6. VOLVER";

    gotoxy(17,24); cout<<"INGRESE UNA OPCION: ";
    cin>>opc;

    switch(opc){
        case 1:if(actualizarNombre(dni)==false){
                gotoxy(17,27);cout<<"ERROR DE LENTURA DEL ARCHIVO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                else{
                gotoxy(17,27);cout<<"DATO MODIFICADO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                system("pause>null");
                system("cls");
        break;
        case 2:if(actualizarApellido(dni)==false){
                gotoxy(17,27);cout<<"ERROR DE LENTURA DEL ARCHIVO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                else{
                gotoxy(17,27);cout<<"DATO MODIFICADO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                system("pause>null");
                system("cls");
        break;
        case 3: if (actualizarDni(dni)==false){
                gotoxy(17,27);cout<<"ERROR DE LENTURA DEL ARCHIVO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                else{
                gotoxy(17,27);cout<<"DATO MODIFICADO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                system("pause>null");
                system("cls");

        break;
        case 4:if(actualizarTelfono(dni)==false){
                gotoxy(17,27);cout<<"ERROR DE LENTURA DEL ARCHIVO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                else{
                gotoxy(17,27);cout<<"DATO MODIFICADO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                system("pause>null");
                system("cls");
        break;
        case 5:if(actualizarCiudad(dni)==false){
               gotoxy(17,27);cout<<"ERROR DE LENTURA DEL ARCHIVO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                else{
                gotoxy(17,27);cout<<"DATO MODIFICADO...OPRIMA CUALQUIER LETRAR PARA VOLVER";
                }
                system("pause>null");
                system("cls");
        break;

        case 6:gotoxy(17,29);cout<<"OPRIMA CUALQUIER LETRAR PARA VOLVER";
                system("pause>null");


                return;





    }

    }

}

#endif // MENUACTUALIZARDATOCLIENTE_H_INCLUDED
