using System.Xml;

class Program
{
    static void Main(string[] args)
    {
        UsingXmlDocument();
    }

    private static void UsingXmlDocument()
    {
        XmlDocument xmlDoc = new XmlDocument();

        XmlNode rootNode = xmlDoc.CreateElement("Contacts");
        xmlDoc.AppendChild(rootNode);

        XmlNode contactNode1 = xmlDoc.CreateElement("Contact");
        XmlAttribute phoneAttribute1 = xmlDoc.CreateAttribute("Phone");
        phoneAttribute1.Value = "04323412";
        contactNode1.Attributes.Append(phoneAttribute1);
        contactNode1.InnerText = "Capitan Sparrow";
        rootNode.AppendChild(contactNode1);

        XmlNode contactNode2 = xmlDoc.CreateElement("Contact");
        XmlAttribute phoneAttribute2 = xmlDoc.CreateAttribute("Phone");
        phoneAttribute2.Value = "03438934";
        contactNode2.Attributes.Append(phoneAttribute2);

        XmlAttribute workPhoneAttribute = xmlDoc.CreateAttribute("Work_Phone");
        workPhoneAttribute.Value = "06889594";
        contactNode2.Attributes.Append(workPhoneAttribute);

        contactNode2.InnerText = "Monkey D. Luffy";
        rootNode.AppendChild(contactNode2);

        xmlDoc.Save("usingXmlDocument.xml");
    }
}
