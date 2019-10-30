//
// Created by fabia on 30/10/2019.
//

#ifndef AREA51_ROBOT_H
#define AREA51_ROBOT_H

#include "includes.h"
#include "typedef.h"

#endif //AREA51_ROBOT_H

lass C_Robots
        {
                private:
                t_button pr_disponibilidad;          //Disponibilidad: Ocupado(0) y Libre (1).
                vector<t_no_negative>pr_home[3];     //Home(Direccion): (Filas, Columnas y Profundidad).
                t_no_negative pr_serie;              //Unidad del Robot: Numero de Serie.
                t_no_negative pr_bateria;            //Porcentaje de Bateria.
                t_no_negative pr_ubicacion;          //Ubicacion del robot

                public:
                //Metodos:
                void m_encender();
                void m_apagar();
                void m_cargar_bateria();
                void m_moverse();
                void recoger();
                void ingresar();
                //Setters:
                void SetDisponibilidad (t_button set_disponibilidad){pr_disponibilidad = set_disponibilidad;}
                void SertHome(vector<t_no_negative> set_home[3]){set_home[3] = pr_home[3];}
                void SetSerie(t_no_negative set_serie){set_serie=pr_serie;}
                void SetBateria(t_no_negative set_bateria){set_bateria = pr_bateria;}
                void SetUbicacion(t_no_negative set_ubicacion){set_ubicacion = pr_ubicacion}
                //Getters:
                t_button getDisponibilidad(){return pr_disponibilidad ;}
                vector<t_no_negative>[3] getHome(){return pr_home;}
                t_no_negative getSerie(){return pr_serie;}
                t_no_negative getBateria(){return pr_bateria;}
                t_no_negative getUbicacion(){return pr_ubicacion;}
        };
