import javax.swing.*;
import java.awt.*;
public class week12b extends JFrame{
    public week12b(String msg)
    {
        super(msg);
        ImageIcon ic = new ImageIcon("cisco.jpg");
        setIconImage(ic.getImage());
        setLayout(new FlowLayout());
        JLabel j1=new JLabel("Enter your name");
        add(j1);
        JTextField j2=new JTextField(10);
        add(j2);
        JLabel j3=new JLabel("Enter you address");
        add(j3);
        JTextArea j4=new JTextArea("Address goes here");
        add(j4);
        JLabel j5=new JLabel("Enter your password");
        add(j5);
        JPasswordField j6=new JPasswordField(10);
        add(j6);
        JCheckBox jch1=new JCheckBox("Hobby1");
        add(jch1);
        JCheckBox jch2=new JCheckBox("Hobby2");
        add(jch2);
        JCheckBox jch3=new JCheckBox("Hobby3");
        add(jch3);
        ButtonGroup radio =new ButtonGroup();
        JRadioButton jr1=new JRadioButton("Male",true);
        JRadioButton jr2=new JRadioButton("Female");
        add(jr1);
        add(jr2);
        String citylist[]={"rajahmundry","vizag","bza"};
        JComboBox jb=new JComboBox(citylist);
        add(jb);


    }
    public static void main(String args[])
    {
        JFrame jf=new week12b("Swing Application");
        jf.setSize(500,500);
        jf.setVisible(true);
    }
}