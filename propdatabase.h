/*
Property database
*/
struct prop_t
{
	string identifier;
	string value;
	int section;
	int hash;
};
class PropDatabase
{
private:
	prop_t[] build_prop;
	prop_t[] project_prop;
	prop_t[] misc_prop;
public:
	void setProperty(prop_t prop);
	string readProperty(string identifier);
}