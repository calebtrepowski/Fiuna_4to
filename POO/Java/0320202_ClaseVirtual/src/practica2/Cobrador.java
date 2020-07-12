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
public class Cobrador extends Empleado {
    private int comision;

    public Cobrador() {
    }

    public Cobrador(int cedula, String nombre, String apellido, int edad,
            int salario, String departamento,int comision) {
        super(cedula, nombre, apellido, edad, salario, "Cobranzas");
        this.comision = comision;
    }

    public int getComision() {
        return comision;
    }

    public void setComision(int comision) {
        this.comision = comision;
    }

    @Override
    public String trabajar() {
        return "\nEl cobrador " + this.nombre + this.apellido
                + " está cobrando\n";
    }

    @Override
    public String descansar() {
        return "\nEl cobrador" + this.nombre + this.apellido
                + " está descansando en la hora de almuerzo\n";
    }

    @Override
    public int calcularSalario() {
        return (salario + comision) - IPS();
    }

    @Override
    public String cobrarSalario() {
        DecimalFormat df = new DecimalFormat();
        return "\nEl cobrador cobra con cheque " +
                df.format(calcularSalario()) + "\n";
    }
    
    
    
}
