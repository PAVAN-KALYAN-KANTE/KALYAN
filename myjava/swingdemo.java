import javax.swing.*;

public class swingdemo extends JFrame {
    public swingdemo(String message) {
        super(message);
        ImageIcon icon = new ImageIcon("kara.jpg");
        setIconImage(icon.getImage());
        setLayout(new FlowLayout());
        JLabel jl=new JLabel("enter your name");
        add(jl);
        JTextField txt=new JTextField(10);
        add(txt);
        
    }
    public static void main(String[] args){
        JFrame jf=new swingdemo("first demo");
        jf.setSize(500,500);
        jf.setVisible(true);
    }
}
