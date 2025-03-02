using System;
using System.Windows.Forms;

namespace kalkulator_c_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        float num1;
        float num2;
        string option;
        float result;

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox1.Text += "9";
        }

        private void button13_Click(object sender, EventArgs e)
        {
            option = "+";
            num1 = float.Parse(textBox1.Text);
            textBox1.Clear();
        }

        private void button0_Click(object sender, EventArgs e)
        {
            textBox1.Text += "7";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text += "4";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text += "1";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox1.Text += "8";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox1.Text += "5";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            textBox1.Text += "2";
        }

        private void button7_Click(object sender, EventArgs e)
        {
            option = "/";
            num1 = float.Parse(textBox1.Text);
            textBox1.Clear();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Text += "6";
        }

        private void button10_Click(object sender, EventArgs e)
        {
            textBox1.Text += "3";
        }

        private void button11_Click(object sender, EventArgs e)
        {
            option = "*";
            num1 = float.Parse(textBox1.Text);
            textBox1.Clear();
        }

        private void button12_Click(object sender, EventArgs e)
        {
            option = "-";
            num1 = float.Parse(textBox1.Text);
            textBox1.Clear();
        }

        private void button14_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            num1 = 0;
            num2 = 0;
            result = 0;
        }

        private void button15_Click(object sender, EventArgs e)
        {
            num2 = float.Parse(textBox1.Text);

            switch (option)
            {
                case "+":
                    result = num1 + num2;
                    break;
                case "-":
                    result = num1 - num2;
                    break;
                case "*":
                    result = num1 * num2;
                    break;
                case "/":
                    result = num1 / num2;
                    break;
                case "^2":
                    result = (float)Math.Pow(num1, 2);
                    break;
                case "sqrt":
                    result = (float)Math.Sqrt(num1);
                    break;
            }

            textBox1.Text = result.ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text += "0";
        }

        private void button16_Click(object sender, EventArgs e)
        {
            textBox1.Text += ".";
        }

        private void button17_Click(object sender, EventArgs e)
        {
            num1 = float.Parse(textBox1.Text);
            result = (float)Math.Pow(num1, 2);
            textBox1.Text = result.ToString();
        }

        private void button18_Click(object sender, EventArgs e)
        {
            num1 = float.Parse(textBox1.Text);
            result = (float)Math.Sqrt(num1);
            textBox1.Text = result.ToString();
        }
    }
}
