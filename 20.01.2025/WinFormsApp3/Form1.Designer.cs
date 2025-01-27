namespace WinFormsApp3
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            components = new System.ComponentModel.Container();
            button1 = new Button();
            btn_stop = new Button();
            label1 = new Label();
            timer1 = new System.Windows.Forms.Timer(components);
            SuspendLayout();
            // 
            // button1
            // 
            button1.Location = new Point(236, 174);
            button1.Name = "button1";
            button1.Size = new Size(167, 23);
            button1.TabIndex = 0;
            button1.Text = "START TIMER";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // btn_stop
            // 
            btn_stop.Location = new Point(204, 257);
            btn_stop.Name = "btn_stop";
            btn_stop.Size = new Size(241, 23);
            btn_stop.TabIndex = 1;
            btn_stop.Text = "STOP TIMER";
            btn_stop.UseVisualStyleBackColor = true;
            btn_stop.Click += btn_stop_Click;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(300, 218);
            label1.Name = "label1";
            label1.Size = new Size(84, 15);
            label1.TabIndex = 2;
            label1.Text = "Zmiana timera";
            // 
            // timer1
            // 
            timer1.Tick += timer1_Tick;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(label1);
            Controls.Add(btn_stop);
            Controls.Add(button1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button button1;
        private Button btn_stop;
        private Label label1;
        private System.Windows.Forms.Timer timer1;
    }
}
