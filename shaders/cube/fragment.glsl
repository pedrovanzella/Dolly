#version 400

out vec4 color;

in VS_OUT
{
	vec4 color;
} fs_in;


void main(void)
{
	color = fs_in.color;
}