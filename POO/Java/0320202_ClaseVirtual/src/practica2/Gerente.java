/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practica2;

import java.text.DecimalFormat;
import practica1.Empleado;

/**
 *
 * @author USER
 */
public class Gerente extends Empleado {
    private int sobreSueldo;

    public Gerente() {
    }

    public Gerente(int cedula, String nombre, String apellido,
            int edad, int salario, String departamento, int _sobresueldo) {
        super(cedula, nombre, apellido, edad, salario, departamento);
        sobreSueldo = _sobresueldo;
    }   
    

    public int getSobreSueldo() {
        return sobreSueldo;
    }

    public void setSobreSueldo(int sobreSueldo) {
        this.sobreSueldo = sobreSueldo;
    }

    @Override
    public String toString() {
        return "GERENTE: " + super.toString() +
                "\nSobreSueldo = " + sobreSueldo + '\n';
    }

    @Override
    public String trabajar() {
        return "Gerenciando la empresa";
    }

    @Override
    public String descansar() {
        return "El gerente no descansa\n";
    }

    @Override
    public String cobrarSalario() {
        DecimalFormat df = new DecimalFormat();
        return "Gerente cobra con Tarjeta " +
                df.format(calcularSalario());
    }

    @Override
    public int calcularSalario() {
        return (salario + sobreSueldo) - IPS();
    }
    
    
}
