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
public abstract class Empleado extends Persona {
    private int salario;
    final protected int SALARIO_MINIMO = 2200000;

    public Empleado() {
        super();
        this.salario = 0;
    }

    public Empleado(int cedula, String nombre, String apellido, int edad, boolean coronavirus, String direccion) {
        super(cedula, nombre, apellido, edad, coronavirus, direccion);
        this.salario = 0;
    }

    public Empleado(int cedula, String nombre, String apellido, int edad, boolean coronavirus, String direccion,
            int salario) {
        super(cedula, nombre, apellido, edad, coronavirus, direccion);
        this.salario = salario;
    }
    
    public int getSalario() {
        return salario;
    }

    public void setSalario(int salario) {
        this.salario = salario;
    }
    
    public abstract int calcularSalario();

    @Override
    public String toString() {
        return super.toString() + "\nEmpleado: " + "\nSalario: " + salario;
    }
}
