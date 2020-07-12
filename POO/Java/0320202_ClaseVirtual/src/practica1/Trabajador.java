/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practica1;

import java.util.Date;

/**
 *
 * @author USER
 */
public interface Trabajador {
    public Date marcarEntrada();
    public String trabajar();
    public String cobrarSalario();
    public String descansar();
    //public Date marcarSalida();
}
