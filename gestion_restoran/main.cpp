#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <dos.h>

using namespace std;
#include "rlutil.h"
#include "TestDados.h"
#include "subMenu.h"
#include "menuCliente.h"
#include "menuPedido.h"
#include "archivoCliente.h"
#include "actualizarDatosClientes.h"
#include "menuActualizarDatoCliente.h"
#include "claseCarta.h"
#include "archivoPlato.h"

int main(){
    bool estado=false;
    while(estado==false){
    setBackgroundColor(GREY);
    system("cls");
    estado=MenuPrincipalGenerala();
    if(estado==true){
        subMenu();
    }
    else{
       gotoxy(20,15); cout<<"CONTRASENIA INCORRECTA...OPRIMA CUALQUIER TECLA PARA VOLVER A INTENTAR";
    }
    system("pause>null");
}




return 0;
}
