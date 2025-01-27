namespace WinFormsApp3
{
    public partial class Form1 : Form
    {
        int liczba = 0;
        string[] lista = new string[3] { 'Arkadiusz', 'Dariusz', 'Kanariusz' };
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Start();

        }

        private void btn_stop_Click(object sender, EventArgs e)
        {
            timer1.Stop();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            liczba++;
            label1.Text = liczba.ToString();
        }
    }
}
