/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package unidad6;

/**
 *
 * @author USER
 */
public class EmpHora extends Empleado {
    protected int salarioHora;
    protected double cantHoras;
    final public int horasMes = 192;

    public EmpHora() {
        super();
        this.salarioHora = 0;
        this.cantHoras = 0;
    }

    public EmpHora(int cedula, String nombre, String apellido, int edad, boolean coronavirus, String direccion) {
        super(cedula, nombre, apellido, edad, coronavirus, direccion);
        this.salarioHora = 0;
        this.cantHoras = 0;
    }

    public EmpHora(int cedula, String nombre, String apellido, int edad, boolean coronavirus, String direccion, int salarioHora, double cantHoras) {
        super(cedula, nombre, apellido, edad, coronavirus, direccion);
        this.salarioHora = salarioHora;
        if (cantHoras <= horasMes)
        {
            this.cantHoras = cantHoras;
        } else {
            this.cantHoras = cantHoras;
        }
    }

    @Override
    public int calcularSalario() {
        return (int)(0.84*(salarioHora*cantHoras));
    }

    
    
    
    
}
