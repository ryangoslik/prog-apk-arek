namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("OKNO POWIADOIEN", "AUTHOR: twojamama", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
    }
}
