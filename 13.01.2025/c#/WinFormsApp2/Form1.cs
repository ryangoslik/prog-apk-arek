namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            double Liczba1 = double.Parse(liczba1.Text);
        }

        private void liczba2_TextChanged(object sender, EventArgs e)
        {
            double Liczba2 = double.Parse(liczba2.Text);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double Liczba1 = double.Parse(liczba1.Text);
            double Liczba2 = double.Parse(liczba2.Text);
            double wynik = Liczba1 + Liczba2;
            MessageBox.Show($"Wynik: {wynik}", "Dodawanie");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            double Liczba1 = double.Parse(liczba1.Text);
            double Liczba2 = double.Parse(liczba2.Text);
            double wynik = Liczba1 - Liczba2;
            MessageBox.Show($"Wynik: {wynik}", "Odejmowanie");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            double Liczba1 = double.Parse(liczba1.Text);
            double Liczba2 = double.Parse(liczba2.Text);
            double wynik = Liczba1 * Liczba2;
            MessageBox.Show($"Wynik: {wynik}", "Mno¿enie");
        }
    }
}
