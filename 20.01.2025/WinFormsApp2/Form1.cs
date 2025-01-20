namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Form3 form2 = new Form3();
            form2.Show();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form2 form = new Form2();
            form.Show();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Form4 form3 = new Form4();
            form3.Show();
            form3.Show();
        }
    }
}
