
namespace ĐoAnCK
{
    partial class FormServer
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.rtxtBefore = new System.Windows.Forms.RichTextBox();
            this.rtxtAfter = new System.Windows.Forms.RichTextBox();
            this.butListen = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // rtxtBefore
            // 
            this.rtxtBefore.Location = new System.Drawing.Point(59, 30);
            this.rtxtBefore.Name = "rtxtBefore";
            this.rtxtBefore.Size = new System.Drawing.Size(371, 144);
            this.rtxtBefore.TabIndex = 0;
            this.rtxtBefore.Text = "";
            // 
            // rtxtAfter
            // 
            this.rtxtAfter.Location = new System.Drawing.Point(59, 180);
            this.rtxtAfter.Name = "rtxtAfter";
            this.rtxtAfter.Size = new System.Drawing.Size(371, 146);
            this.rtxtAfter.TabIndex = 1;
            this.rtxtAfter.Text = "";
            // 
            // butListen
            // 
            this.butListen.Location = new System.Drawing.Point(477, 149);
            this.butListen.Name = "butListen";
            this.butListen.Size = new System.Drawing.Size(120, 51);
            this.butListen.TabIndex = 2;
            this.butListen.Text = "Lắng nghe";
            this.butListen.UseVisualStyleBackColor = true;
            this.butListen.Click += new System.EventHandler(this.butListen_Click);
            // 
            // FormServer
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(620, 338);
            this.Controls.Add(this.butListen);
            this.Controls.Add(this.rtxtAfter);
            this.Controls.Add(this.rtxtBefore);
            this.Name = "FormServer";
            this.Text = "FormServer";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.RichTextBox rtxtBefore;
        private System.Windows.Forms.RichTextBox rtxtAfter;
        private System.Windows.Forms.Button butListen;
    }
}