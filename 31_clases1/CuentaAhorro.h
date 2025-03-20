#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class CuentaAhorro{
	private:
		//atributos
		float saldo;
	public:
		//atributos
		string nombreCliente;
		string numeroCuenta;
		//constructor
		CuentaAhorro(string nombreCliente, string numeroCuenta){
			this->nombreCliente = nombreCliente;
			this->numeroCuenta = numeroCuenta;
			this->saldo = 0.00;
		}
		//metodos
		float getSaldo(){
			return this->saldo;
		}
		void depositar(float monto){
			if( monto >= 0 )
				this->saldo = this->saldo + monto;
			else
				throw invalid_argument("Monto a depositar no puede ser negativo");
		}
		void retirar(float monto){
			if( monto >= 0 ){
				if( monto > this->saldo )
					throw invalid_argument("No puede retirar mas de lo que tiene en la cuenta");
				else
					this->saldo = this->saldo - monto;
			}
			else
				throw invalid_argument("Monto a retirar no puede ser negativo");
		}
};

#endif




