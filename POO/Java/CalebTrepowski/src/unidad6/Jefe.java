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
public class Jefe extends Empleado{
    protected String departamento;
    final public int SOBRE_SUELDO = super.SALARIO_MINIMO;

    public Jefe() {
        super();
        this.departamento = "";
    }

    public Jefe(int cedula, String nombre, String apellido, int edad, boolean coronavirus, String direccion) {
        super(cedula, nombre, apellido, edad, coronavirus, direccion);
        this.departamento = "";
    }

    public Jefe(int cedula, String nombre, String apellido, int edad, boolean coronavirus, String direccion,
            int salario, String departamento) {
        super(cedula, nombre, apellido, edad, coronavirus, direccion, salario);
        this.departamento = departamento;
    }

    @Override
    public int calcularSalario() {
        return (int)0.84*(super.getSalario() + SOBRE_SUELDO);
    }
    
    
    
    
}
