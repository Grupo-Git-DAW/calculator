
package calculadora;

import javax.swing.JOptionPane;

public class Calculadora {
    public static void main(String[] args) {
        float numero1,numero2,suma,resta,multiplicacion,division;
        char operacion;
        
        numero1=Float.parseFloat(JOptionPane.showInputDialog("Introduce un numero: "));
        numero2=Float.parseFloat(JOptionPane.showInputDialog("Introduce otro numero: "));
        
        operacion = JOptionPane.showInputDialog("Introduce la operacion que desea realizar: ").charAt(0);
        
        switch(operacion)
        {
            case 's':
            case 'S': suma = numero1+numero2;
                             JOptionPane.showMessageDialog(null, "La suma es: "+suma);
                             break;
            case 'r':
            case 'R': resta = numero1-numero2;
                             JOptionPane.showMessageDialog(null, "La resta es: "+resta);
                             break;
            case 'P':
            case 'p':
            case 'M':
            case 'm': multiplicacion = numero1*numero2;
                             JOptionPane.showMessageDialog(null, "La multiplicacion es: "+multiplicacion);
                             break;
            case 'D':
            case 'd': division = numero1 / numero2;
                             JOptionPane.showMessageDialog(null, "La division es: "+division);
                             break;
                             
            default: JOptionPane.showInputDialog(null, "Error, operacion no encontrada");
                             break;
        }
        
        
    }
    
}
