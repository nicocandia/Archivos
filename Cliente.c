

#include "Cliente.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Cliente* Cliente_new()
{
    Cliente* this;
    this=malloc(sizeof(Cliente));
    return this;
}

void Cliente_delete(Cliente* this)
{
    free(this);
}

Cliente* Cliente_newConParametros(int idCliente,char* nombre,char* apellido)
{
    Cliente* this;
    this=Cliente_new();

    if(
    !Cliente_setIdCliente(this,idCliente)&&
    !Cliente_setNombre(this,nombre)&&
    !Cliente_setApellido(this,apellido))
        return this;

    Cliente_delete(this);
    return NULL;
}

int Cliente_setIdCliente(Cliente* this,int idCliente)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->idCliente=idCliente;
        retorno=0;
    }
    return retorno;
}

int Cliente_getIdCliente(Cliente* this,int* idCliente)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *idCliente=this->idCliente;
        retorno=0;
    }
    return retorno;
}

int Cliente_setNombre(Cliente* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=0;
    }
    return retorno;
}

int Cliente_getNombre(Cliente* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(nombre,this->nombre);
        retorno=0;
    }
    return retorno;
}

int Cliente_setApellido(Cliente* this,char* apellido)
{
    int retorno=-1;
    if(this!=NULL && apellido!=NULL)
    {
        strcpy(this->apellido,apellido);
        retorno=0;
    }
    return retorno;
}

int Cliente_getApellido(Cliente* this,char* apellido)
{
    int retorno=-1;
    if(this!=NULL && apellido!=NULL)
    {
        strcpy(apellido,this->apellido);
        retorno=0;
    }
    return retorno;
}

Cliente* Cliente_new()
{
    Cliente* this;
    this=malloc(sizeof(Cliente));
    return this;
}

void Cliente_delete(Cliente* this)
{
    free(this);
}

Cliente* Cliente_newConParametros(char* idCliente,char* nombre,char* apellido)
{
    Cliente* this;
    this=Cliente_new();
    //FALTA VALIDAR

    if(
    !Cliente_setIdCliente(this,idCliente)&&
    !Cliente_setNombre(this,nombre)&&
    !Cliente_setApellido(this,apellido))
        return this;

    Cliente_delete(this);
    return NULL;
}

int Cliente_setIdCliente(Cliente* this,char* idCliente)
{
    int retorno=-1;
    if(this!=NULL && idCliente!=NULL)
    {
        strcpy(this->idCliente,idCliente);
        retorno=0;
    }
    return retorno;
}

int Cliente_getIdCliente(Cliente* this,char* idCliente)
{
    int retorno=-1;
    if(this!=NULL && idCliente!=NULL)
    {
        strcpy(idCliente,this->idCliente);
        retorno=0;
    }
    return retorno;
}

int Cliente_setNombre(Cliente* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=0;
    }
    return retorno;
}

int Cliente_getNombre(Cliente* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(nombre,this->nombre);
        retorno=0;
    }
    return retorno;
}

int Cliente_setApellido(Cliente* this,char* apellido)
{
    int retorno=-1;
    if(this!=NULL && apellido!=NULL)
    {
        strcpy(this->apellido,apellido);
        retorno=0;
    }
    return retorno;
}

int Cliente_getApellido(Cliente* this,char* apellido)
{
    int retorno=-1;
    if(this!=NULL && apellido!=NULL)
    {
        strcpy(apellido,this->apellido);
        retorno=0;
    }
    return retorno;
}

