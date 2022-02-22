/*
 * Fazer um programa que de desconto para uma balada
 * caso for mulher, tenha entre de 36 até 60 anos, e ensino superior tenha 15%
 * caso for mulher, ter de 36 ate 60 mas nao tem superior 20%
 * caso for mulher, ter de 20 ate 35 o desconto 25%
 * tirando isso 0 de desconto
 *
 * Caso for homem e tiver de 20 ate 30 anos, tenha ensino superior e nao estude tera 15%
 * Caso for homem de 20 a 30 anos com superior e estuda 25%
 * 
 */
#include <iostream>
#include <string.h>
#include <cstdio>
#include <stdio.h>

using namespace std;

char sexo, estudo, decisao;
float desconto, economia, valor, total;
int formacao, idade;
string nome, ssexo, sestudo, sformacao;

class Impressao
{
	public:
		void imprimir(float total, string nome, string ssexo, string sestudo, int idade, string  sformacao, float desconto, float valor);
};

void imprimir(float total, string nome, string ssexo, string sestudo, int idade, string  sformacao, float desconto, float valor);


int main()
{
	Impressao imp;

	inicio:
	std::cout << "Digite o nome: "; std::cin >> nome;

	std::cout << "Digite o valor do ingresso: "; std::cin >> valor;
	
	std::cout << "Digite a idade: "; std::cin >> idade;
	
	std::cout << "Digite o sexo [F]eminino [M]asculino "; std::cin >> sexo;
	if (sexo == 'f' || 'F')
		ssexo = "FEMININO";
	else
		if (sexo == 'm' || 'M')
		ssexo = "MASCULINO";
	
	std::cout << "Digite a formacao [1]Medio [2]Superior : "; std::cin >> formacao;
	if (formacao == 1)
		sformacao = "MEDIO";
	else
		sformacao = "SUPERIOR";

	std::cout << "Ainda estuda? [S]/[N]: "; std::cin >> estudo;
	if (estudo == 's' || "S")
		sestudo = "ESTUDA";
	else
		sestudo = "NAO ESTUDA";

	if(idade >= 60)
	{
		std::cout<< "50 porcento de Desconto";
		desconto = 0.15;
	}
	//Mulheres
	else
		if(sexo == 'f' || 'F')
		{
		if((idade>=36) && (idade<=60))
			{
			if(formacao == 2)
				desconto =0.15;
			else
				desconto = 0.20;
			}
		else
			if((idade>=20) && (idade<=35))
			{
			desconto=0.25;
			}
			else
				std::cout << "Erro, Cliente menor de idade!!";
		}
		else
			if(formacao == 1)
			desconto = 0.10;
			else
				if((idade>=20) && (idade<=30))
					if(estudo=='n')
						desconto = 0.15;
				else
					desconto = 0.25;	
	total = valor - valor * desconto;
	
	decisao:
	std::cout << "O que gostaria de Fazer? [I]mpressao [S]air [O]utro"; 
	std::cin >> decisao;

	if(decisao == 'i')
		{
		

	imp.imprimir(total, nome, ssexo, sestudo, idade, sformacao, desconto, valor);
		goto decisao;
		}
		else
		if(decisao == 'o')
		goto inicio;
		else
			if(decisao == 's')
			return 0;
}



	void Impressao::imprimir(float total, string nome, string ssexo, string sestudo, int idade, string  sformacao, float desconto, float valor)
{
	std::cout << "|Nome:                  |   " << nome      << "   		 |" << std::endl;
	std::cout << "|Sexo:	       	        |   " << ssexo	   << "		 |" << std::endl;
	std::cout << "|Idade:	       	        |   " << idade     << "      		 |" << std::endl;
	std::cout << "|Formacao:              |   " << sformacao << "		 |" << std::endl;
	std::cout << "|Estudo:	        |   " << sestudo   << "  		 |"<< std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << " 			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|			|   " << " 			 |"<<std::endl;
	std::cout << "|			|   " << "			 |"<<std::endl;
	std::cout << "|Valor do Ingresso      |   " << valor <<"                  |" << std::endl;
	std::cout << "|Subtotal		|   " << valor << " - " << desconto << " Porcento" <<"  |"<<std::endl;
	std::cout << "|Total		        |   " << total << "			 |"<<std::endl;
} 
