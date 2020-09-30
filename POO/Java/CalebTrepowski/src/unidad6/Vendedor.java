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
public class Vendedor extends Empleado{
    protected int montoVendido;
    protected double comision;
    final public double comisionMinima = 2.5;

    public Vendedor() {
        super();
        this.montoVendido = 0;
        this.comision = comisionMinima;
    }
    public Vendedor(int cedula, String nombre, String apellido, int edad, boolean coronavirus, String direccion) {
        super(cedula, nombre, apellido, edad, coronavirus, direccion);
        this.montoVendido = 0;
        this.comision = comisionMinima;
    }
    public Vendedor(int cedula, String nombre, String apellido, int edad, boolean coronavirus, String direccion,
        int salario, double comision) {
        super(cedula, nombre, apellido, edad, coronavirus, direccion, salario);
        if (comision >= comisionMinima)
        {
            this.comision = comision;
        } else {
            this.comision = comisionMinima;
        }   
    }

    @Override
    public int calcularSalario() {
        return (int)(0.84*(super.getSalario() + montoVendido*comision/100));
    }
}
