namespace ReproductorMusica
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            Reproductor = new AxWMPLib.AxWindowsMediaPlayer();
            lstCanciones = new ListBox();
            btnAdjuntar = new PictureBox();
            ((System.ComponentModel.ISupportInitialize)Reproductor).BeginInit();
            ((System.ComponentModel.ISupportInitialize)btnAdjuntar).BeginInit();
            SuspendLayout();
            // 
            // Reproductor
            // 
            Reproductor.Enabled = true;
            Reproductor.Location = new Point(12, 3);
            Reproductor.Name = "Reproductor";
            Reproductor.OcxState = (AxHost.State)resources.GetObject("Reproductor.OcxState");
            Reproductor.Size = new Size(776, 79);
            Reproductor.TabIndex = 0;
            // 
            // lstCanciones
            // 
            lstCanciones.FormattingEnabled = true;
            lstCanciones.ItemHeight = 15;
            lstCanciones.Location = new Point(12, 179);
            lstCanciones.Name = "lstCanciones";
            lstCanciones.Size = new Size(776, 259);
            lstCanciones.TabIndex = 1;
            lstCanciones.SelectedIndexChanged += lstCanciones_SelectedIndexChanged;
            // 
            // btnAdjuntar
            // 
            btnAdjuntar.Image = Properties.Resources.Pictogrammers_Material_Pause_circle_outline_512;
            btnAdjuntar.Location = new Point(12, 88);
            btnAdjuntar.Name = "btnAdjuntar";
            btnAdjuntar.Size = new Size(80, 80);
            btnAdjuntar.SizeMode = PictureBoxSizeMode.StretchImage;
            btnAdjuntar.TabIndex = 2;
            btnAdjuntar.TabStop = false;
            btnAdjuntar.Click += pictureBox1_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnAdjuntar);
            Controls.Add(lstCanciones);
            Controls.Add(Reproductor);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)Reproductor).EndInit();
            ((System.ComponentModel.ISupportInitialize)btnAdjuntar).EndInit();
            ResumeLayout(false);
        }

        #endregion

        private AxWMPLib.AxWindowsMediaPlayer Reproductor;
        private ListBox lstCanciones;
        private PictureBox btnAdjuntar;
    }
}
