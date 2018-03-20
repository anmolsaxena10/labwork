/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package mypack;

/**
 *
 * @author user1
 */
public class Colors {
    private String name;
    private String rgb;

    public Colors() {
    }

    public Colors(String name, String rgb) {
        this.name = name;
        this.rgb = rgb;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getRgb() {
        return rgb;
    }

    public void setRgb(String rgb) {
        this.rgb = rgb;
    }

    @Override
    public String toString() {
        return "Colors{" + "name=" + name + ", rgb=" + rgb + '}';
    }
    
}
