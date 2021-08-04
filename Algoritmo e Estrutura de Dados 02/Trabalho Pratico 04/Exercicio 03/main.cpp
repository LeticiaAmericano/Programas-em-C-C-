#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//No
typedef struct No
{
    char elemento [];
    int nivel;
    No* esquerdo;
    No* direito;
}No;
//Criar
void criarNo(No no,char elemento[], No esquerdo, No direito, int nivel)
{
    strcpy(no->elemento,elemento);
    strcpy(no->esquerdo, malloc(sizeof(no)));
    strcpy(no->direito, malloc(sizeof(no)));
    strcpy(no->nivel, nivel);
}
//Set
void setNivel(No no)
{
    no->nivel = 1 + Math.max(getNivel(esquerdo),getNivel(direito));
}
//Get
int getNivel(No no)
{
    return (strcpy(no, null)) ? 0 : no.nivel;
}
//AVL
typedef struct AVL
{
    No raiz;
}AVL;
/*
//Pesquisar
bool pesquisar(int x, No i)
{
    bool resp;
    if (i == null)
    {
        resp = false;
    }
    else if (x == i.elemento)
    {
        resp = true;
    }
    else if (x < i.elemento)
    {
        resp = pesquisar(x, i.esquerdo);
    }
    else
    {
        resp = pesquisar(x, i.direito);
    }
    return resp;
}

        //Mostrar Central
        void mostrarCentral(No i)
        {
            if (i != null)
            {
                mostrarCentral(i.esquerdo);
                printf(" %s", i.elemento);
                mostrarCentral(i.direito);
            }
        }
        //Mostrar Pre
        void mostrarPre(No i)
        {
            if (i != null)
            {
                mostrarPre(i.esquerdo);
                mostrarPre(i.direito);
            }
        }
        //Mostrar Pos
        void mostrarPos(No i)
        {
            if (i != null)
            {
                mostrarPos(i.esquerdo);
                mostrarPos(i.direito);
                printf(" %s", i.elemento);
            }
        }
        //Inserir
        No inserir(int x, No i)
        {
            if (i == null)
            {
                i = new No(x);
            }
            else if (x < i.elemento)
            {
                i.esquerdo = inserir(x, i.esquerdo);
            }
            else if (x > i.elemento)
            {
                i.direito = inserir(x, i.direito);

            }
            return balancear(i);
        }
        //Remover
        No remover(int x, No i)
        {
            if (i != null)
            {
                if (x < i.elemento)
                {
                    i.esquerdo = remover(x, i.esquerdo);
                }
                else if (x > i.elemento)
                {
                    i.direito = remover(x, i.direito);
                }
                else if (i.direito == null)
                {
                    i = i.esquerdo;
                }
                else if (i.esquerdo == null)
                {
                    i = i.direito;
                }
                else
                {
                    i.esquerdo = antecessor(i, i.esquerdo);
                }
            }
            return balancear(i);
        }
        No antecessor(No i, No j)
        {
            if (j.direito != null)
            {
         		j.direito = antecessor(i, j.direito);
            }
            else
            {
                i.elemento = j.elemento;
                j = j.esquerdo;
            }
            return j;
        }
        No balancear(No no)
        {
            if(no != null)
            {
                int fator = No.getNivel(no.direito) - no.getNivel(no.esquerdo);
                if (Math.abs(fator) <= 1)
                {
                    no.setNivel();
                }
                else if (fator == 2)
                {
                    int fatorFilhoDir = No.getNivel(no.direito.direito) - No.getNivel(no.direito.esquerdo);
                    if (fatorFilhoDir == -1)
                    {
                        no.direito = rotacionarDir(no.direito);
                    }
                    no = rotacionarEsq(no);
                }
                else if (fator == -2)
                {
                    int fatorFilhoEsq = No.getNivel(no.esquerdo.direito) - No.getNivel(no.esquerdo.esquerdo);
                    if (fatorFilhoEsq == 1)
                    {
                        no.esquerdo = rotacionarEsq(no.esquerdo);
                    }
                    no = rotacionarDir(no);
                }
            }
            return no;
        }
        No rotacionarDir(No no)
        {
            No noEsq = no.esquerdo;
            No noEsqDir = noEsq.direito;
            noEsq.direito = no;
            no.esquerdo = noEsqDir;
            no.setNivel();
            noEsq.setNivel();
            return noEsq;
        }
        No rotacionarEsq(No no)
        {
            No noDir = no.direito;
            No noDirEsq = noDir.esquerdo;
            noDir.esquerdo = no;
            no.direito = noDirEsq;
            no.setNivel();
            noDir.setNivel();
            return noDir;
        }

    public:
        //Construtor
        AVL()
        {
            raiz = null;
        }
        //Pesquisar
        bool pesquisar(int x)
        {
            return pesquisar(x, raiz);
        }
        //Mostrar Central
        void mostrarCentral()
        {
            mostrarCentral(raiz);
        }
        //Mostrar Pre
        void mostrarPre()
        {
            mostrarPre(raiz);
        }
        //Mostrar Pos
        void mostrarPos()
        {
            mostrarPos(raiz);
        }
        //Inserir
        void inserir(int x)
        {
            raiz = inserir(x, raiz);
        }
        //Remover
        void remover(int x)
        {
            raiz = remover(x, raiz);
        }
        */
No raiz;
int main()
{
    raiz = null;
    return 0;
}
