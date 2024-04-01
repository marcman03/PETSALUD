#include "pch.h"
#include "TxRegistraProp.h"

void TxRegistraProp::crear(String^& usernameS, String^& contrasenyaS, String^& nomComplertS, String^& telefonS, String^& dataNaixementS, String^& correuElectronicS, String^& descripcioS)
{

    username = usernameS;
    contrasenya = contrasenyaS;
    nomComplert = nomComplertS;
    telefon = telefonS;
    dataNaixement = dataNaixementS;
    correuElectronic = correuElectronicS;
    descripcio = descripcioS;

}

void TxRegistraProp::executar()
{
    try {

        PassarellaPropietari prop(username, nomComplert, contrasenya, correuElectronic, telefon, dataNaixement, descripcio);
        prop.crear();

    }

    catch (Exception^ ex) {

        throw ex;

    }

}
