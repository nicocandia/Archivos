typedef struct{
    char idCliente[50];
    char nombre[50];
    char apellido[50];
}Cliente;


Cliente* Cliente_new();
void Cliente_delete();
Cliente* Cliente_newConParametros(char* idCliente,char* nombre,char* apellido);

int Cliente_setIdCliente(Cliente* this,char* idCliente);
int Cliente_getIdCliente(Cliente* this,char* idCliente);

int Cliente_setNombre(Cliente* this,char* nombre);
int Cliente_getNombre(Cliente* this,char* nombre);

int Cliente_setApellido(Cliente* this,char* apellido);
int Cliente_getApellido(Cliente* this,char* apellido);

#endif // CLIENTE_H_INCLUDED
